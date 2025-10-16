#ifndef POOSISTEMAGESTIONVENTAS_VENTA_H
#define POOSISTEMAGESTIONVENTAS_VENTA_H
#include <vector>
#include <utility>
#include <iostream>


using std::vector;
using std::pair;
using std::cout;
using std::endl;


class Producto;
class Cliente;


class Venta {
private:
    Cliente* cliente;
    vector<pair<Producto*, int>> productos; // par: (producto, cantidad)


public:
    Venta();
    Venta(Cliente* cliente);
    virtual ~Venta();


    void agregarProducto(Producto* producto, int cantidad);
    float calcularTotal() const;
    void mostrarDetalle() const;
    Cliente* getCliente() const;
};

#endif //POOSISTEMAGESTIONVENTAS_VENTA_H