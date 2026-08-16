// Progra1.Lab1 SistemaEmpleadoPOO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Empleado.h"
#include <iostream>
#include "desarrollador.h"
#include "TecnicoSoporte.h"
#include "Administrador.h"

int main() {
	
	Empleado empleado1("Satoru Gojo", "Ciberseguridad");
	Empleado empleado2("Giyu Tomioka", "Desarrollador de Software");

	Desarrollador desarrollador1("Tanjiro Kamado", "C++");
	TecnicoSoporte tecnico1("Zenitsu Agatsuma");
	
	Administrador admin1("Dorthy León");

	desarrollador1.mostrarInformacion();
	desarrollador1.trabajar();

	tecnico1.mostrarInformacion();
	tecnico1.trabajar();

	admin1.mostrarInformacion();
	admin1.trabajar();

	std::cout << "\\--- Demostrar polimotfismo ---\\";
	Empleado* equipo[] = { &desarrollador1, &tecnico1, &admin1 };
	for (Empleado* emp : equipo) {
		emp->mostrarInformacion();
		emp->trabajar();
}

	empleado1.setArea("Ciberseguridad");
	std::cout << "\nDespues de actualizar el area:\n";
	empleado1.mostrarInformacion();

	std::cout << "Consulta mediante getter:"
		<< empleado1.getNombre() << '\n';
	
	/*empleado1.setArea("");
	std::cout << "\nDespues de intentar dejar el area vacia:\n";
	empleado1.mostrarInformacion();

	El setter de antes protegio o se aseguro el código, ya que intentó
	el cambio , al evaluar vió que no cumplia con la regla
		no estar vacío, entonces lo que hizo fue silenciar, dejando el dato de antes
		sin cambiar, protegiendo la integridad de los datos, y evitando que se rompa el programa*/

	empleado1.trabajar();

	return 0;
}

