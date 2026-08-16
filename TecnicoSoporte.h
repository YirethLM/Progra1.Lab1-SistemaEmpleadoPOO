#pragma once
#include "Empleado.h"
#include <string>
class TecnicoSoporte : public Empleado {

public: 
	TecnicoSoporte(std::string nombre);
	void trabajar() const override;
};