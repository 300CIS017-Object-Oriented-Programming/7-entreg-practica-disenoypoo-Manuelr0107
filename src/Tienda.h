#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include <iostream>
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"

class Tienda {
private:
    std::vector<Producto*> productos;
    std::vector<Cliente*> clientes;
    std::vector<Venta*> ventas;

    void inicializarDatos();

public:
    Tienda();
    ~Tienda();

    void mostrarProductos();
    void mostrarClientes();
    void registrarVenta();
    void calcularValorInventario();
};

#endif
