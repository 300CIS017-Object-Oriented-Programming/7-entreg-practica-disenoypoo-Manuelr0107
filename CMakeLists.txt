cmake_minimum_required(VERSION 3.19)
project(POOSistemaGestionVentas)

set(CMAKE_CXX_STANDARD 20)

add_executable(POOSistemaGestionVentas src/main.cpp
        src/Producto.cpp
        src/Producto.h
        src/Cliente.cpp
        src/Cliente.h
        src/Venta.cpp
        src/Venta.h
        src/Tienda.cpp
        src/Tienda.h)