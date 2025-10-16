#include "Venta.h"
#include "Cliente.h" // Aquí sí, para acceder a los métodos de Cliente
#include "Producto.h"
#include <iostream>

Venta::Venta() {
    cliente = nullptr;
    producto = nullptr;
    cantidadComprada = 0;
}

Venta::Venta(Cliente* c, Producto* p, int cant) {
    cliente = c;
    producto = p;
    cantidadComprada = cant;
}

Venta::~Venta() {}

float Venta::getTotalVenta() {
    return producto->getPrecio() * cantidadComprada;
}

void Venta::mostrarDatos() {
    std::cout << "Cliente: " << cliente->getNombre() << std::endl;
    std::cout << "Producto: " << producto->getCodigo() << std::endl;
    std::cout << "Cantidad: " << cantidadComprada << std::endl;
    std::cout << "Total: $" << getTotalVenta() << std::endl;
}
