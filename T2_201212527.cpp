#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

string entrada;
string ruta;

typedef struct mbr
{
    int mbr_tamano;
    time_t mbr_fecha_creacion;
    int mbr_dsk_signature;
};


void exec (){
    
    cout<<"Comando EXEC"<<endl;

}

void mkdisk(){

    cout<<"Comando MKDISK"<<endl;
}

void rep(){

    cout<<"Comando REP"<<endl;
}

void salir(){

    cout<<"Se cerrara la aplicacion"<<endl;
    exit(0);

}

void menu(){
    cout<<"Ingrese un comando:  "<<endl;
    cin>>entrada;
    
}

void analizador(string entrada){

    if(entrada == "exec")
    {
        exec();       
    }
    else if(entrada == "mkdisk"){
        mkdisk();
    }
    else if(entrada == "rep"){
        rep();
    }
    else if(entrada == "salir"){
        salir();
    }
    else{
        cout<<"Comando incorrecto"<<endl;
    }
}


int main()
{
    cout<<"Tarea No.2 - Manejo E Implementacion de Archivos"<<endl;
    cout<<"Luis Alfredo Vejo Mendoza - 201212527"<<endl;
    
    do
    {
        menu();
        analizador(entrada);
    } while (entrada != "salir");
    
    
    
       
}



