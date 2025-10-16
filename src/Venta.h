#ifndef POOSISTEMAGESTIONVENTAS_VENTA_H
#define POOSISTEMAGESTIONVENTAS_VENTA_H


#include <iostream>

#include "Producto.h"

class Cliente;
class Venta {
private:
    Cliente* cliente;
    Producto* producto;
    int cantidadComprada;

public:
    Venta();
    Venta(Cliente* c, Producto* p, int cant);
    ~Venta();

    float getTotalVenta();
    void mostrarDatos();
};

#endif
