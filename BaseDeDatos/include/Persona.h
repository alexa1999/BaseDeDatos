#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
#include <string>
using namespace std;

class Persona
{
    public:
        void set_nombre(string a);
        void set_apellido(string a);
        void set_edad(int);
        string get_nombre();
        string get_apellido();
        int get_edad();
    protected:
        string nombre;
        string apellido;
        int edad;
};

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

#endif // PERSONA_H
