#ifndef POOSISTEMAGESTIONVENTAS_CLIENTE_H
#define POOSISTEMAGESTIONVENTAS_CLIENTE_H
#include <string>
#include <vector>
#include <iostream>
#include "Venta.h"


#include <string>
#include <iostream>

class Cliente {
private:
    std::string nombre;
    int id;

public:
    Cliente();
    Cliente(std::string n, int i);
    ~Cliente();

    void mostrarDatos();
    int getId();
    std::string getNombre();
};

#endif

