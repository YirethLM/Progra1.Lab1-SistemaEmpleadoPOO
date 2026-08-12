// Progra1.Lab1 SistemaEmpleadoPOO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Empleado.h"
#include <iostream>

int main() {
	Empleado empleado1("Satoru Gojo", "Ciberseguridad");
	Empleado empleado2("Giyu Tomioka", "Desarrollo de Software");
	empleado1.mostrarInformacion();
	empleado2.mostrarInformacion();

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
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
