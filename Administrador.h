#pragma once
#include "Empleado.h"
#include <string>
class Administrador : public Empleado {

public:
	Administrador(std::string nombre);
	void trabajar() const override;
};
