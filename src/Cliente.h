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
    Cliente();
    Cliente(std::string nombre, std::string id);
    ~Cliente();

    std::string getNombre() const;
    std::string getId() const;
    void agregarVenta(Venta* venta);
    void mostrarHistorial() const;
};


#endif //POOSISTEMAGESTIONVENTAS_CLIENTE_H