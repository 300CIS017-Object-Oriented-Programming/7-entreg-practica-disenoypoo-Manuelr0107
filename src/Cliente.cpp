#include "Cliente.h"

Cliente::Cliente() {
    nombre = "";
    id = 0;
}

Cliente::Cliente(std::string n, int i) {
    nombre = n;
    id = i;
}

Cliente::~Cliente() {}

void Cliente::mostrarDatos() {
    std::cout << "Cliente: " << nombre << std::endl;
    std::cout << "ID: " << id << std::endl;
}

int Cliente::getId() { return id; }
std::string Cliente::getNombre() { return nombre; }

