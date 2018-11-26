#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H


#include "Persona.h"
#include "Estu.h"
class Estudiante:public Persona
{


    public:
        Estudiante();
        Estudiante(string,int);
        Estudiante(const Estudiante &es);
        bool operator > (const Estudiante& a);
        bool operator >= (const Estudiante& a);
        int get_numEs();
        void set_numEs(int);
        int Num_Estudiante=0;
};

#endif // ESTUDIANTE_H
