#include "Persona.h"

string Persona::get_nombre(){//obtiene
    return nombre;
}
string Persona::get_apellido(){
    return apellido;
}
void Persona::set_nombre(string a){//ajusta
    nombre=a;
}
void Persona::set_apellido(string a){
    apellido=a;
}
int Persona::get_edad(){
    return edad;
}
void Persona::set_edad(int a){
    edad=a;
}
