#include "Universidad.h"

Universidad::Universidad(){
    bool b=true;
    int cont=1;
    while(b==true){
        string nameArchivo=convertiratexto<string>(cont);
        nameArchivo += ".txt";
        ifstream fs(nameArchivo.c_str(),ios :: in);
        if(fs.fail()){
            b=false;
            tamanio--;
        }
        tamanio++;
        fs.close();
        cont++;
        contador++;
    }

    a=new Estudiante[tamanio];

    for(int i=1;i<=tamanio;i++){
        string nameArchivo=convertiratexto<string>(i);
        nameArchivo += ".txt";
        ifstream fs(nameArchivo.c_str(),ios :: in);
        a[i-1].set_nombre(obt_linea(nameArchivo,0));
        ////////////////////
        a[i-1].set_apellido(obt_linea(nameArchivo,1));
        ///////////////////
        string temp1=obt_linea(nameArchivo,2);
        a[i-1].set_edad(convertiranumero<int>(temp1));
        ///////////////////
        string temp2=obt_linea(nameArchivo,3);
        a[i-1].set_numEs(convertiranumero<int>(temp2));
        //////////////////
        fs.close();
    }
}

int Universidad::lenght(string a){
    int cont=0;
    for(int i=0;a[i]!='\0';i++){
        cont++;
    }
    return cont;
}

int Universidad::conv_char(char a){
    return a-'0';
}

string Universidad::obt_linea(string a,int b){
    ifstream archivo_entrada(a.c_str());//tuve un error pero se soluciono,antes usaba solo el constructo
    string linea;
    int contador = 0;
    while(getline(archivo_entrada, linea)) {
        if(b==contador) {
            return linea;
        }
        contador++;
    }
}


void Universidad::mod_arch(string arch,string nomb="NULL",string apell="NULL",int edad=0,int num=0){
    string nameArchivo=arch;
    nameArchivo += ".txt";
    ofstream fs(nameArchivo.c_str());
    fs <<nomb<<endl;
    fs <<apell<<endl;
    fs <<edad<<endl;
    fs <<num<<endl;
    fs.close();

}

char Universidad::p_l(string a){//obtiene la letra
    return a[0];
}

void Universidad::imprimir(){
    for(int i=0;i<tamanio;i++){
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",220,220,220,220,220,220,220,220,220,220,220,220,220,220);
        cout<<endl;
        cout<<"POSICION: "<<i+1<<endl;
        cout<<"NOMBRE: "<<a[i].get_nombre()<<" ";
        cout<<a[i].get_apellido()<<endl;
        cout<<"EDAD: "<<a[i].get_edad()<<endl;
        cout<<"NUMERO DE ESTUDIANTE: "<<a[i].get_numEs()<<endl;
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",220,220,220,220,220,220,220,220,220,220,220,220,220,220);
    }
}
void Universidad::borrar(int posicion){

    for(int i=posicion;i<tamanio-1;i++){
        string nombtemp1=a[i].get_nombre();
        string apelltemp1=a[i].get_apellido();
        int edadtemp1=a[i].get_edad();
        int numptemp1=a[i].get_numEs();

        string nombtemp2=a[i+1].get_nombre();
        string apelltemp2=a[i+1].get_apellido();
        int edadtemp2=a[i+1].get_edad();
        int numptemp2=a[i+1].get_numEs();

        mod_arch(convertiratexto<string>(i+1),nombtemp1,apelltemp1,edadtemp1,numptemp1);
        mod_arch(convertiratexto<string>(i+2),nombtemp2,apelltemp2,edadtemp2,numptemp2);
    }
    //////////
    string nameArchivo=convertiratexto<string>(posicion+1);
    nameArchivo += ".txt";
    char buffer[5];
    strcpy(buffer,nameArchivo.c_str());
    remove(buffer);
    ///////////
    Estudiante *nuevo= new Estudiante [tamanio-1];
    tamanio--;
    for(int i=0;i<posicion;i++){
        nuevo[i]=a[i];
    }
    for(int i=posicion;i<tamanio;i++){
        nuevo[i]=a[i+1];
    }
    delete [] a;
    a=nuevo;
    //////////////////
    string nameA=convertiratexto<string>(posicion+2);
    nameA+=".txt";
    char buffer1[5];
    strcpy(buffer1,nameA.c_str());
    rename(buffer1,buffer);
}
void Universidad::vacear(){
    for(int i=1;i<=tamanio;i++){

        string nameArchivo=convertiratexto<string>(i);
        nameArchivo += ".txt";
        char buffer[5];
        strcpy(buffer,nameArchivo.c_str());
        remove(buffer);
    }
    cout<<"a"<<endl;
    delete [] a;
    tamanio=0;
}
int Universidad::get_tamanio(){
    return tamanio;
}

void Universidad::agregar(string nuevonombre,string nuevoapellido,int nuevaedad){
    Estudiante *nuevo= new Estudiante[tamanio+1];
    for(int i=0;i<tamanio;i++){
        nuevo[i]=a[i];
    }
    tamanio++;
    nuevo[tamanio-1].set_nombre(nuevonombre);
    nuevo[tamanio-1].set_apellido(nuevoapellido);
    nuevo[tamanio-1].set_edad(nuevaedad);
    nuevo[tamanio-1].set_numEs(++contador);
    delete [] a;
    a=nuevo;

    mod_arch(convertiratexto<string>(get_tamanio()),nuevonombre,nuevoapellido,nuevaedad,a[tamanio-1].get_numEs());

}
void Universidad::cambiar(int pos,int ed, string nom,string apell){
    a[pos].set_edad(ed);
    a[pos].set_nombre(nom);
    a[pos].set_apellido(apell);
    mod_arch(convertiratexto<string>(pos+1),nom,apell,ed,a[pos].get_numEs());
}
int Universidad::comodin(string a,string b){
    int conta=0;
    if(lenght(b)<lenght(a)){
        return 0;
    }
    for(int i=0;b[i]!='\0';i++){
        if(b[i]==a[0]){
            for(int j=0;j<3;j++){
                if(a[j]==b[i+j]){
                    conta++;
                }
            }
            if(conta==3){
                return 1;
            }
        }
    }
    return 0;
}


void Universidad::ord_edad(){
    int cont=1;
    while(cont!=0){
        cont=0;
        for(int i=0;i<tamanio-1;i++){
            if(a[i] > a[i+1]){
                Estudiante b(a[i]);
                a[i]=a[i+1];
                a[i+1]=b;

                string nombtemp1=a[i].get_nombre();
                string apelltemp1=a[i].get_apellido();
                int edadtemp1=a[i].get_edad();
                int numptemp1=a[i].get_numEs();

                string nombtemp2=a[i+1].get_nombre();
                string apelltemp2=a[i+1].get_apellido();
                int edadtemp2=a[i+1].get_edad();
                int numptemp2=a[i+1].get_numEs();

                mod_arch(convertiratexto<string>(i+1),nombtemp1,apelltemp1,edadtemp1,numptemp1);
                mod_arch(convertiratexto<string>(i+2),nombtemp2,apelltemp2,edadtemp2,numptemp2);

                cont+=1;
            }
        }
    }
}

void Universidad::ord_alf()
{
    int cont=1;
    while(cont!=0){
        cont=0;
        for(int i=0;i<tamanio-1;i++){
            string uno=a[i].get_nombre();
            string dos=a[i+1].get_nombre();
            if(conv_char(p_l(uno)) > conv_char(p_l(dos))){
                Estudiante temp(a[i]);
                a[i]=a[i+1];
                a[i+1]=temp;


                string nombtemp1=a[i].get_nombre();
                string apelltemp1=a[i].get_apellido();
                int edadtemp1=a[i].get_edad();
                int numptemp1=a[i].get_numEs();

                string nombtemp2=a[i+1].get_nombre();
                string apelltemp2=a[i+1].get_apellido();
                int edadtemp2=a[i+1].get_edad();
                int numptemp2=a[i+1].get_numEs();

                mod_arch(convertiratexto<string>(i+1),nombtemp1,apelltemp1,edadtemp1,numptemp1);
                mod_arch(convertiratexto<string>(i+2),nombtemp2,apelltemp2,edadtemp2,numptemp2);




                cont+=1;
            }
        }
    }
}

void Universidad::ord_numEs(){
    int cont=1;
    while(cont!=0){
        cont=0;
        for(int i=0;i<tamanio-1;i++){
            if(a[i] >= a[i+1]){
                Estudiante b(a[i]);
                a[i]=a[i+1];
                a[i+1]=b;

                string nombtemp1=a[i].get_nombre();
                string apelltemp1=a[i].get_apellido();
                int edadtemp1=a[i].get_edad();
                int numptemp1=a[i].get_numEs();

                string nombtemp2=a[i+1].get_nombre();
                string apelltemp2=a[i+1].get_apellido();
                int edadtemp2=a[i+1].get_edad();
                int numptemp2=a[i+1].get_numEs();

                mod_arch(convertiratexto<string>(i+1),nombtemp1,apelltemp1,edadtemp1,numptemp1);
                mod_arch(convertiratexto<string>(i+2),nombtemp2,apelltemp2,edadtemp2,numptemp2);


                cont+=1;
            }
        }
    }
}


bool Universidad::buscar(string a,string b){
    int conta=1;
    if(lenght(b)<lenght(a)){
        return 0;
    }
    for(int i=0;b[i]!='\0';i++){
        if(b[0]==a[0]){
            if(a[i]==b[i]){
                conta++;
            }
            if(conta==lenght(b)){
                return 1;
            }
        }
    }
    return 0;
}

void Universidad::bus_rela(string nnombre){
    for(int i=0;i<tamanio;i++){
        if(buscar(nnombre,a[i].get_apellido())){
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",220,220,220,220,220,220,220,220,220,220,220,220,220,220);
            cout<<"ENCONTRADO"<<endl;
            cout<<"NOMBRE: "<<a[i].get_nombre()<<" ";
            cout<<a[i].get_apellido()<<endl;
            cout<<"EDAD: "<<a[i].get_edad()<<endl;
            cout<<"NUMERO DE ESTUDIANTE: "<<a[i].get_numEs()<<endl;
            return;
        }
    }
    cout<<"Busquedas relacionadas: "<<endl;
    for(int i=0;i<tamanio;i++){
        if(comodin(nnombre,a[i].get_nombre())){
            cout<<a[i].get_nombre()<<endl;
        }
    }
}
void Universidad::bus_numEs(int num){
    int en=0;
    for(int i=0;i<tamanio;i++){
        if(a[i].get_numEs() == num){
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",220,220,220,220,220,220,220,220,220,220,220,220,220,220);
            cout<<"ENCONTRADO"<<endl;
            cout<<"NOMBRE: "<<a[i].get_nombre()<<" ";
            cout<<a[i].get_apellido()<<endl;
            cout<<"EDAD: "<<a[i].get_edad()<<endl;
            cout<<"NUMERO DE ESTUDIANTE"<<a[i].get_numEs()<<endl;
            en+=1;
        }
    }
    if(en==0){
        cout<<"NO ENCONTRADO"<<endl;
    }
}
Universidad::~Universidad(){
    delete []a;
}
