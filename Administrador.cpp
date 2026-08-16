#include "Administrador.h"
#include <iostream>

Administrador::Administrador(std::string nombre)
	: Empleado(nombre, "administrador") {
}

void Administrador::trabajar() const {
	std::cout << getNombre() << " Esta gestionando la forma de hacernos millonarios " << std::endl;
}