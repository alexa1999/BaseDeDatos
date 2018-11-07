#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <string>
#include <iostream>
using namespace std;
class Director
{
    protected:
        string usuario;
        string password;
        int opc;
    public:
        Director();
        void ingreso();
        virtual int registro();
};

#endif // DIRECTOR_H
