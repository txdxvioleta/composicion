#include "Fecha.h"
#include "Empleado.h"

Empleado::Empleado(){
    nombre = "desconocido";
    dni = 1010;
}

Empleado::Empleado(string _nombre, int _dni, short dia, short mes, short anio) : fechaNueva(dia,mes,anio){
    nombre = _nombre;
    dni = _dni;

}

Empleado::~Empleado(){
    cout << "Destructor ejecutado" << endl;
}

//Sobrecarga del operador de flujo:
ostream & operator << (ostream &salida, Empleado emp){

    salida << "Nombre: " << emp.nombre << endl;
    salida << "DNI: " << emp.dni << endl;
    salida << "Fecha: " << emp.fechaNueva << endl << endl;
    
    return salida;
}
