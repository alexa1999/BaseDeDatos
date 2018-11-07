#include "Estudiante.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include <direct.h>
#include <string>
using namespace std;
Estudiante :: Estudiante():Director(){}

int Estudiante :: registro()
{

    int op;
    do {
        system("cls");
        cout<<"\t\t\tBIENVENIDO A UNIVERSIDAD SAN PABLO"<<endl;
        cout<<"\t\t\t------------------------------"<<endl;
        cout<<"[1]. NUEVO ESTUDIANTE "<<endl;
        cout<<"[2]. BUSCAR"<<endl;
        cout<<"[0]. SALIR "<<endl;
        cout<<"INGRESE OPCION  :  ";
        cin>>op;
        system("cls");
        switch (op){
        case 1:
        {

            nuevoMiembro();
            break;
        }
        case 2:
        {
            buscar();
            break;
        }
    }
        }while (op != 0);

}
void Estudiante ::nuevoMiembro()
{
string nameArchivo;
    string extension;
        cout<<"INGRESE EL NOMBRE DEL NUEVO ESTUDIANTE:";
            cin.ignore();
            getline(cin,nameArchivo);
            system("cls");
            cout<<"\t\t\tALTA NUEVA"<<endl;
            cout<<"\t\t\t----------"<<endl;
            cout<<"NOMBRE     :";
            cin.getline(nombre,30);
            cout<<"APELLIDOS  : ";
            cin.getline(apellidos,30);
            cout<<"EDAD    :";
            cin>>edad;
            cout<<"DNI   :";
            cin>>dni;
            cout<<"DIRECCION  : ";
            cin>>(domicilio);
            cout<<"GENERO   :";
            cin>>genero;

            cout<<"TELEFONO   : ";
            cin>>movil;
            cout<<"TELEFONO DE CONTACTO   :";
            cin>>movilFamiliares;
            cout<<"INFORMACION    :  ";
            cin.getline(info,150);
            getline(cin,extension);
            nameArchivo += ".txt";
            ofstream fs(nameArchivo.c_str());
            fs <<"NOMBRE   : "<<nombre<<endl;
            fs <<"APELLIDO :"<<apellidos<<endl;
            fs <<"EDAD  :"<<edad<<endl;
            fs <<"GENERO  :"<<genero<<endl;
            fs <<"DNI   :"<<dni<<endl;
            fs <<"DIRECCION :"<<domicilio<<endl;
            fs <<"TELEFONO :"<<movil<<endl;
            fs <<"TELEFONOS DE CONTACTO  :"<<movilFamiliares<<endl;
            fs <<"INFORMACION:"<<info<<endl;
            fs.close();
            cout<<" REGISTRO GUARDADO...... "<<endl;
            system("pause");


            }
void Estudiante :: buscar ()
{
    string nameArchivo;
    string extension;
    cout<< "INGRESE EL NOMBRE DEL Estudiante  :";
                cin.ignore();
                getline(cin,nameArchivo);
                nameArchivo += ".txt";
                ifstream fs(nameArchivo.c_str(),ios :: in);
                char linea[128];
                long cont = 0L;
                if (fs.fail())
                    cerr <<"EL Estudiante NO EXISTE  "<<endl;
                else
                while (!fs.eof()){
                        fs.getline(linea,sizeof(linea));
                        cout << linea <<endl;
                        if ((++cont % 24)== 0){
                            cout << "continuar......";
                            cin.get();
                        }
                }
                fs.close();
                system("pause");

}
