#include "Universidad.h"

//Universidad::Universidad()
//{
//    bool b=true;
//    int cont=1;
//    int contador=0;
//    while(b==true){
//        string nameArchivo=convertiratexto(cont);
//        nameArchivo += ".txt";
//        ifstream fs(nameArchivo.c_str(),ios :: in);
//        if(fs.fail()){
//            b=false;
//            tamanio--;
//        }
//        tamanio++;
//        fs.close();
//        cont++;
//        contador++;
//    }
//
//    e=new Estudiante [tamanio];
//
//    for(int i=1;i<=tamanio;i++){
//        string nameArchivo=convertiratexto(i);
//        nameArchivo += ".txt";
//        ifstream fs(nameArchivo.c_str(),ios :: in);
//        e[i-1].set_nombre(obt_linea(nameArchivo,0));
//        ////////////////////
//        e[i-1].set_apellido(obt_linea(nameArchivo,1));
//        ///////////////////
//
//        fs.close();
//    }
//}
//string Universidad::convertiratexto(float f){
//    stringstream ss;
//	ss << f;
//	return ss.str();
//}
//string Universidad::obt_linea(string e,int b){
//    ifstream archivo_entrada(e);
//    string linea;
//    int contador = 0;
//    while(getline(archivo_entrada, linea)) {
//        if(b==contador) {
//            return linea;
//        }
//        contador++;
//    }
//}
//Universidad::~Universidad()
//{
//    //dtor
//}
