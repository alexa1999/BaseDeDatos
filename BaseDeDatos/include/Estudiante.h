#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include"Persona.h"
class Estudiante : public Persona
{
    int  Num_Estudiante=0;
    public:
        Estudiante();
        Estudiante(string,int);
        Estudiante(const Estudiante &e);
        int get_numes();
        void set_numpes(int);


};


#endif // ESTUDIANTE_H
