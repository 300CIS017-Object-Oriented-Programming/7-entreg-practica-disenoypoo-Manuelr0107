#include "Tienda.h"

Tienda::Tienda() {
    std::cout << "Tienda inicializada..." << std::endl;
    inicializarDatos();
}

Tienda::~Tienda() {
    for (auto p : productos) delete p;
    for (auto c : clientes) delete c;
    for (auto v : ventas) delete v;
    std::cout << "Memoria liberada. Fin del programa." << std::endl;
}

void Tienda::inicializarDatos() {
    Producto* p1 = new Producto("Producto1", "P001", 10.0, 20);
    Producto* p2 = new Producto("Producto2", "P002", 15.0, 15);
    Cliente* c1 = new Cliente("Cliente1", 1);
    Cliente* c2 = new Cliente("Cliente2", 2);

    productos.push_back(p1);
    productos.push_back(p2);
    clientes.push_back(c1);
    clientes.push_back(c2);
}

void Tienda::mostrarProductos() {
    std::cout << "--- Lista de productos ---" << std::endl;
    for (auto p : productos) p->mostrarDatos();
}

void Tienda::mostrarClientes() {
    std::cout << "--- Lista de clientes ---" << std::endl;
    for (auto c : clientes) c->mostrarDatos();
}

void Tienda::registrarVenta() {
    int idCliente;
    std::string codigoProducto;
    int cantidad;

    std::cout << "Ingrese ID del cliente: ";
    std::cin >> idCliente;
    std::cout << "Ingrese código del producto: ";
    std::cin >> codigoProducto;
    std::cout << "Ingrese cantidad: ";
    std::cin >> cantidad;

    Cliente* clienteSel = nullptr;
    Producto* productoSel = nullptr;

    for (auto c : clientes) {
        if (c->getId() == idCliente) clienteSel = c;
    }

    for (auto p : productos) {
        if (p->getCodigo() == codigoProducto) productoSel = p;
    }

    if (clienteSel && productoSel && productoSel->getCantidad() >= cantidad) {
        Venta* nuevaVenta = new Venta(clienteSel, productoSel, cantidad);
        ventas.push_back(nuevaVenta);
        productoSel->setCantidad(productoSel->getCantidad() - cantidad);
        std::cout << "Venta registrada correctamente!" << std::endl;
        nuevaVenta->mostrarDatos();
    } else {
        std::cout << "Error en la venta (cliente o producto no válido, o stock insuficiente)." << std::endl;
    }
}

void Tienda::calcularValorInventario() {
    float total = 0;
    for (auto p : productos) {
        total += p->getPrecio() * p->getCantidad();
    }
    std::cout << "El valor total del inventario es: $" << total << std::endl;
}