#include "TecnicoSoporte.h"
#include <iostream>

TecnicoSoporte::TecnicoSoporte(std::string nombre)
	: Empleado(nombre, "Soporte Técnico") {
}

void TecnicoSoporte::trabajar() const {
	std::cout << getNombre() << " Esta resolviendo un inprevisto de soporte " << std::endl;
}