#include "desarrollador.h"
#include <iostream>

Desarrollador::Desarrollador(std::string nombre, std::string lenguajeProgramacion)
	: Empleado(nombre, "Desarrollo de Software"), lenguajeProgramacion(lenguajeProgramacion) {
}
void Desarrollador::trabajar() const {
	std::cout << getNombre() << ", esta programando con " << getArea()
		<< " utilizando " << lenguajeProgramacion << std::endl;
}