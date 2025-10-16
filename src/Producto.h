#ifndef POOSISTEMAGESTIONVENTAS_PRODUCTO_H
#define POOSISTEMAGESTIONVENTAS_PRODUCTO_H

#include <iostream>
#include <string>

class Producto{
private:
    std::string codigo;
    std::string nombre;
    float precio;
    int cantidad;

public:
    Producto();
    Producto(std::string codigo, std::string nombre, float precio, int cantidad);
    ~Producto();

    std::string getCodigo() const;
    std::string getNombre() const;
    float getPrecio() const;
    int getCantidad() const;

    void setCantidad(int nuevaCantidad);
    void mostrarInfo() const;

};


#endif //POOSISTEMAGESTIONVENTAS_PRODUCTO_H