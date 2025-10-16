#ifndef POOSISTEMAGESTIONVENTAS_TIENDA_H
#define POOSISTEMAGESTIONVENTAS_TIENDA_H

#include <vector>
#include <string>


#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"


using std::vector;
using std::string;


class Tienda {
private:
    vector<Producto*> inventario;
    vector<Cliente*> clientes;
    vector<Venta*> ventas;


    void inicializarDatos();


public:
    Tienda();
    virtual ~Tienda();


    // Productos
    void registrarProducto();
    Producto* buscarProductoPorCodigo(const string &codigo) const;
    void mostrarInventario() const;


    // Clientes
    void registrarCliente();
    Cliente* buscarClientePorId(const string &id) const;
    void mostrarClientes() const;


    // Ventas
    void registrarVenta();


    // Informes
    float calcularValorInventario() const;
};

#endif //POOSISTEMAGESTIONVENTAS_TIENDA_H