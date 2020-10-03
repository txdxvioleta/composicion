#include <iostream>
#include "Fecha.h"
using namespace std;

class Empleado{
    //Atributos:
    private:
        string nombre;
        int dni;
        Fecha fechaNueva;

    //Metodos:
    public:
        //Constructores:
        Empleado(); //Constructor por defecto
        Empleado(string _nombre, int _dni, short dia, short mes, short anio); //Constructor sobrecargado
        Empleado(const Fecha &f); //Constructor copia
        
        //Destructor:
        ~Empleado();
        
    //Sobrecarga del operador de flujo:
    friend ostream & operator << (ostream &salida, Empleado emp);

        
};
