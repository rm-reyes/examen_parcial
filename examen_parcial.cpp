//examen_parcial.cpp* : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <mysql.h>
#include <iostream>
#include <Windows.h>
#include "estudiante.h"
using namespace  std;




int main()
{
	int opcion;
	cout << "ingrese 1, para ingresar un nuevo estudiante" << endl;
	cout << "ingrese 2, para actualizar datos del estudiante" << endl;
	cout << "ingrese 3, si desea eliminar un registro" << endl;
	cout << "ingrese 4, para revision de datos" << endl;
	cout << "ingrese 5, si desea salir" << endl;
	cin >> opcion;

	if (opcion == 1) {
		system("cls");
		//string estudiantes;
		int telefono;
		string estudiante, carnet, nombres, apellidos, direccion, genero, email, fecha_nacimiento;
		cout << "Ingrese nombre del estudiante: ";
		getline(cin, estudiante);
		cout << "Ingrese apellidos del estudiante: ";
		getline(cin, apellidos);
		cout << "Ingrese direccion del estudiante: ";
		getline(cin, direccion);
		cout << "Ingrese telefono del estudiante: ";
		cin>> telefono;
		cout << "Ingrese genero del estudiante: ";
		getline(cin, genero);
		cout << "Ingrese email del estudiante: ";
		getline(cin, email);
		cout << "Ingrese la fecha de nacimiento del del estudiante:";
		cin >> fecha_nacimiento;

		estudiantes p = estudiantes(carnet, nombres, apellidos, direccion ,telefono  , genero, email, fecha_nacimiento);
		p.crear();
		p.leer();
	}

	else if (opcion == 2) {
		system("cls");
		//string  estudiantes;
		int telefono;
		string estudiante, carnet, nombres, apellidos, direccion,genero, email, fecha_nacimiento;
		cout << "Ingrese nombre del estudiante: ";
		getline(cin, estudiante);
		cout << "Ingrese apellidos del estudiante: ";
		getline(cin, apellidos);
		cout << "Ingrese direccion del estudiante: ";
		getline(cin, direccion);
		cout << "Ingrese telefono del estudiante: ";
		cin >> telefono;
		cout << "Ingrese genero del estudiante: ";
		getline(cin, genero);
		cout << "Ingrese email del estudiante: ";
		getline(cin, email);
		cout << "Ingrese la fecha de nacimiento del del estudiante:";
		cin >> fecha_nacimiento;
	

		estudiantes p = estudiantes(carnet, nombres, apellidos, direccion, telefono, genero, email, fecha_nacimiento);
		p.actualizar();
		p.leer();
	}
	
	else if (opcion == 3) {
		system("cls");
		string  estudiante;
		int telefono;
		string carnet, nombres, apellidos, direccion, genero, email, fecha_nacimiento;

		cout << "Ingrese nombre del estudiante: ";
		getline(cin, estudiante);
		cout << "Ingrese apellidos del estudiante: ";
		getline(cin, apellidos);
		cout << "Ingrese direccion del estudiante: ";
		getline(cin, direccion);
		cout << "Ingrese telefono del estudiante: ";
		cin >> telefono;
		cout << "Ingrese genero del estudiante: ";
		getline(cin, genero);
		cout << "Ingrese email del estudiante: ";
		getline(cin, email);
		cout << "Ingrese la fecha de nacimiento del del estudiante:";
		cin >> fecha_nacimiento;

		estudiantes p = estudiantes(carnet, nombres, apellidos, direccion, telefono, genero, email, fecha_nacimiento);
		p.eliminar();
		p.leer();
	}

	else if (opcion == 4) {
		system("cls");
		string  estudiante;
		int telefono;
		string carnet, nombres, apellidos, direccion, genero, email, fecha_nacimiento;

		cout << "Ingrese nombre del estudiante: ";
		getline(cin, estudiante);
		cout << "Ingrese apellidos del estudiante: ";
		getline(cin, apellidos);
		cout << "Ingrese direccion del estudiante: ";
		getline(cin, direccion);
		cout << "Ingrese telefono del estudiante: ";
		cin >> telefono;
		cout << "Ingrese genero del estudiante: ";
		getline(cin, genero);
		cout << "Ingrese email del estudiante: ";
		getline(cin, email);
		cout << "Ingrese la fecha de nacimiento del del estudiante:";
		cin >>fecha_nacimiento;


		estudiantes p = estudiantes(carnet, nombres, apellidos, direccion, telefono, genero, email, fecha_nacimiento);
		p.leer();
	}


	else if (opcion == 4) {
		system("cls");
		estudiantes p = estudiantes();
		p.leer();
	}

	else if (opcion == 5) {
		system("cls");
		cout << "finalizar" << endl;

	}


	return 0;
}
