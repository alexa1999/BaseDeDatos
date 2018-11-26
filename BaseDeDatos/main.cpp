
#include <iostream>
using namespace std;
#include "Control.h"
#include <windows.h>





int main(){

    while (true){
        Control c;
        int elec=0;
        cout<<"1) ORDENAR EstudianteS "<<endl;
        cout<<"2) INGRESAR NUEVO Estudiante "<<endl;
        cout<<"3) MODIFICAR Estudiante"<<endl;
        cout<<"4) ELIMINAR Estudiante "<<endl;
        cout<<"5) BUSCAR Estudiante"<<endl;
        cout<<"6) IMPRIMIR REGISTRO"<<endl;
        cout<<"7) VACEAR REGISTRO"<<endl;cin>>elec;
        c.opcion(elec);
        system("pause");
        system("CLS");

    }

    return 0;
}
