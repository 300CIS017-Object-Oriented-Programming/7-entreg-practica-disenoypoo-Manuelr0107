#ifndef POOSISTEMAGESTIONVENTAS_CLIENTE_H
#define POOSISTEMAGESTIONVENTAS_CLIENTE_H
#include <string>
#include <vector>
#include <iostream>
#include "venta.h"
class Cliente {
private:
    std::string nombre;
    std::string id;
    std::vector<Venta*> historial;

public:
    Cliente(); //constructor por defecto
    Cliente(std::string nombre, std::string id);  //constructor
    ~Cliente();  //destructor

    std::string getNombre() const;
    std::string getId() const;
    void agregarVenta(Venta* venta);
    void mostrarHistorial() const;
    void mostrarInfo() const;
};

#endif //POOSISTEMAGESTIONVENTAS_CLIENTE_H