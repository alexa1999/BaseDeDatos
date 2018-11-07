#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include "Estudiante.h"
#include<iostream>
#include <string>
using namespace std;

class Universidad
{
    public:
        Universidad();
        virtual ~Universidad();
        int get_tamanio();
        void cambiar(int, int ,string,string);
        void imprimir();

    protected:

    private:
        Estudiante *e;
};

#endif // UNIVERSIDAD_H
