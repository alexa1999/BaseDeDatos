
#include <iostream>
using namespace std;
#include "Control.h"
#include <windows.h>
#include <cstdlib>




int main(){
   system("color 6B");
    while (true){
        Control c;
        int elec=0;
        cout<<endl;cout<<endl;
        cout<<".......                  Universidad Catolica San Pablo               ......."<<endl;cout<<endl;cout<<endl;
        cout<<"      1- ORDENAR ESTUDIANTES "<<endl;cout<<endl;
        cout<<"      2- INGRESAR NUEVO ESTUDIANTES "<<endl;cout<<endl;
        cout<<"      3- MODIFICAR ESTUDIANTES"<<endl;cout<<endl;
        cout<<"      4- ELIMINAR ESTUDIANTES "<<endl;cout<<endl;
        cout<<"      5- BUSCAR ESTUDIANTES"<<endl;cout<<endl;
        cout<<"      6- IMPRIMIR REGISTRO"<<endl;cout<<endl;
        cout<<"      7- VACEAR REGISTRO"<<endl;cin>>elec;
        c.opcion(elec);
        system("pause");
        system("CLS");

    }

    return 0;
}
