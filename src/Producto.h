#ifndef POOSISTEMAGESTIONVENTAS_PRODUCTO_H
#define POOSISTEMAGESTIONVENTAS_PRODUCTO_H

#include <iostream>
#include <string>

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

class Producto {
private:
    std::string nombre;
    std::string codigo;
    float precio;
    int cantidad;

public:
    Producto();
    Producto(std::string n, std::string c, float p, int cant);
    ~Producto();

    void mostrarDatos();
    std::string getCodigo();
    float getPrecio();
    int getCantidad();
    void setCantidad(int c);
};

#endif


#endif //POOSISTEMAGESTIONVENTAS_PRODUCTO_H