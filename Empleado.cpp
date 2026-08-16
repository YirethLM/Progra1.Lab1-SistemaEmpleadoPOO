#include "Empleado.h"
#include <iostream>

Empleado::Empleado(std::string nombre, std::string area)
	: nombre(nombre), area(area) {
}
std::string Empleado::getNombre() const {
	return nombre;
}
std::string Empleado::getArea() const {
	return area;
}
void Empleado::setNombre(std::string nuevoNombre) {
	if (!nuevoNombre.empty()) {
		nombre = nuevoNombre;
	
	}
}
void Empleado::setArea(std::string nuevaArea)
{
	if (!nuevaArea.empty()) {
		area = nuevaArea;
	}
}
void Empleado::mostrarInformacion() const {
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Área: " << area << std::endl;
}
void Empleado::trabajar() const {
	std::cout << getNombre() << ", esta trabajando en " << getArea() << std::endl;
}