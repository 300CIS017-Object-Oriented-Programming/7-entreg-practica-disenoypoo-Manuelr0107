#include "Producto.h"

Producto::Producto() {
    nombre = "";
    codigo = "";
    precio = 0;
    cantidad = 0;
}

Producto::Producto(std::string n, std::string c, float p, int cant) {
    nombre = n;
    codigo = c;
    precio = p;
    cantidad = cant;
}

Producto::~Producto() {}

void Producto::mostrarDatos() {
    std::cout << "Código: " << codigo << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
    std::cout << "Cantidad en stock: " << cantidad << std::endl;
    std::cout << "------------------------" << std::endl;
}

std::string Producto::getCodigo() { return codigo; }
float Producto::getPrecio() { return precio; }
int Producto::getCantidad() { return cantidad; }
void Producto::setCantidad(int c) { cantidad = c; }
