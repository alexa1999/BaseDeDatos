#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include"Director.h"
class Estudiante : public Director
{
    private:
        char nombre[30];
        char apellidos[30];
        string domicilio;
        int edad;
        char info[150];
        char genero[30];
        string dni;
        int movil;
        string movilFamiliares;
    public:
        Estudiante();
        int registro();
        void nuevoMiembro();
        void buscar();



};


#endif // ESTUDIANTE_H
