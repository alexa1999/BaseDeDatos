#include "Director.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
#define USER "m"
#define PASS "h"
using namespace std;
Director::Director()
{

}

void Director::ingreso()
{
    int cont=0;
    bool ingresa = false;
    do{
        system("cls");
        cout << "\t\t\tLOGIN DE USUARIO"<<endl;
        cout << "\t\t\t----------------"<<endl;
        cout<<"INGRESE SU NOMBRE DE USUARIO:  ";
        cin>>usuario;
        cout<<"INGRESE SU CONTRASENHA:  ";
        char caracter;
        caracter = getch();
        password = " ";
        while(caracter != 13){
                if (caracter != 8){
                    password.push_back(caracter);
                    cout <<"*";}
                else{
                    if(password.length() > 0){
                        cout<< "\b \b";
                        password = password.substr(0,password.length()-1);}
                }
            caracter = getch();
        }


        if(usuario == USER && password == PASS){
                ingresa = true;}
        else{
            cout<<"\n";
            cout<<" USUARIO Y/O PASSWORD SON INCORRECTOS"<<endl;
            system("PAUSE");

            cont++;
        }
    }
    while(ingresa == false && cont < 3);

    if (ingresa == false){
            cout<< "VUELVE A INTENTARLO MAS TARDE"<<endl;
            exit(0);
            }

    else{

            system("cls");
            }

    }
int Director :: registro()
{

    cout<<"\t\t\tBIENVENIDO A UNIVERSIDAD SAN PABLO"<<endl;
    cout<<"\t\t\t------------------------------"<<endl;
    cout<<"[1]. PACIENTES "<<endl;
    cout<<"[2]. VOLUNTARIOS"<<endl;
    cout<<"INGRESE OPCION   :";
    cin>>opc;
    switch (opc){
        case 1:
            {
                return 1;
            }
        case 2:
            {
                return 2;

            }
    }
}
