#include <iostream>
#include "Tienda.h"

int main() {
    Tienda tienda;
    int opcion = 0;

    do {
        std::cout << "\nMENU TIENDA ECOLOGICA" << std::endl;
        std::cout << "1. Mostrar productos" << std::endl;
        std::cout << "2. Mostrar clientes" << std::endl;
        std::cout << "3. Registrar venta" << std::endl;
        std::cout << "4. Calcular valor total del inventario" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: tienda.mostrarProductos(); break;
            case 2: tienda.mostrarClientes(); break;
            case 3: tienda.registrarVenta(); break;
            case 4: tienda.calcularValorInventario(); break;
            case 5: std::cout << "saliendo del sistema..." << std::endl; break;
            default: std::cout << "Opcion no valida." << std::endl;
        }
    } while (opcion != 5);

    return 0;
}