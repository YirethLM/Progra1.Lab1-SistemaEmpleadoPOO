#pragma once
#include "Empleado.h"
#include <string>

class Desarrollador : public Empleado {
private:
	std::string lenguajeProgramacion;
public:
	Desarrollador(std::string nombre, std::string lenguajeProgramacion);
	void trabajar() const override;
};
	
