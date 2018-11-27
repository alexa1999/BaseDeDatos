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
#include<stdio.h>
#include<conio.h>
using namespace std;


class Universidad
{
    public:
        Universidad();
        int get_tamanio();
        void cambiar(int, int ,string,string);
        void imprimir();
        void borrar(int);
        void vacear();
        int comodin(string,string);

        void ord_edad();
        void ord_alf();
        void ord_numEs();

        bool buscar(string,string);
        void bus_rela(string);
        void bus_numEs(int);


        void agregar(string,string,int);
        ~Universidad();
    protected:
        char p_l(string);
        int lenght(string);
        int conv_char(char);
        void mod_arch(string,string,string,int,int);

        string obt_linea(string,int);
        int contador=1799;
    private:
        Estudiante *a;
        int tamanio=0;
};
template<typename T>
T convertiratexto(float f){//STRING FLOAT
    stringstream ss;
	ss << f;
	return ss.str();
}
template<typename T>
T convertiranumero(string texto1){//INT STRING
	int number;
	number = atof(texto1.c_str());
	return number;
}

#endif // UNIVERSIDAD_H
