#pragma once 
#include <string>

class Empleado {
private:
	std::string nombre;
	std::string area;

public:
	Empleado(std::string nombre, std::string area);
	std::string getNombre() const;
	std::string getArea() const;

	void setNombre(std::string nuevoNombre);
	void setArea(std::string nuevaArea);

	void mostrarInformacion() const;

	virtual void trabajar() const; 
	virtual ~Empleado() = default;
};