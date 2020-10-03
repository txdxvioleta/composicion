#include <iostream>
using namespace std;

class Fecha{

    //Atributos:
    private:
        short dia;
        short mes;
        short anio;

    //Metodos:
    public:
        //Constructores:
        Fecha(); //Constructor por defecto
        Fecha(short d, short m, short a); //Constructor sobrecargado
        Fecha(const Fecha &f); //Constructor copia

        //Getters:
        short getDia();
        short getMes();
        short getAnio();

        //Setters:
        void setFecha(short d, short m, short a);

        //Destructor
        ~Fecha(); 
};
