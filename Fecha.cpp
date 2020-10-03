#include "Fecha.h"


//Constructor por defecto
Fecha::Fecha(){
    dia = 0;
    mes = 0;
    anio = 0;

    cout << "Constructor por defecto ejecutado" << endl;
} 

//Constructor sobrecargado
Fecha::Fecha(short d, short m, short a){    
    
    setFecha(d,m,a);

}

//Constructor copia
Fecha::Fecha(const Fecha &f){
    dia = f.dia;
    mes = f.mes;
    anio = f.anio;


} 

//Getters:
short getDia();
short getMes();
short getAnio();

//Setters:
void Fecha::setFecha(short d, short m, short a){
    dia = d;
    mes = m;
    anio = a;
}