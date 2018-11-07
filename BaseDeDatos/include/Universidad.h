#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include "Estudiante.h"
#include<iostream>
#include <string>
#include <string>
#include <string.h>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
using namespace std;

class Universidad
{
    public:
        Universidad();
        virtual ~Universidad();
        int get_tamanio();
        string convertiratexto(float);
        string obt_linea(string,int);
        void cambiar(int, int ,string,string);
        void imprimir();



    private:
        Estudiante *e;
        int tamanio=0;
};

#endif // UNIVERSIDAD_H
