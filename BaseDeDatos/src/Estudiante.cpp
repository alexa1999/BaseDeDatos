#include "Estudiante.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include <direct.h>
#include <string>
using namespace std;

//}
Estudiante::Estudiante(){
    nombre="NULL";
    edad=0;

}
Estudiante::Estudiante(string i,int j)
{
    nombre=i;
    edad=j;
}
Estudiante::Estudiante(const Estudiante &es){

    this->nombre=es.nombre;
    this->apellido=es.apellido;
    this->edad=es.edad;
    this->Num_Estudiante=es.Num_Estudiante;
}
bool Estudiante::operator >(const Estudiante& a){
    if(this->edad >= a.edad){
        return true;
    }
    return false;
}
bool Estudiante::operator >=(const Estudiante& a){
    if(this->Num_Estudiante >= Num_Estudiante){
        return true;
    }
    return false;
}
int Estudiante::get_numEs(){
    return Num_Estudiante;
}
void Estudiante::set_numEs(int a){
    Num_Estudiante=a;
}


