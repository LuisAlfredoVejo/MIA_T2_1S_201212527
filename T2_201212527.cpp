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


void exec (string entrada){
    
    cout<<"Comando exec"<<endl;

}

void salir(){

    exit(0);

}

void analizador(string entrada){

    if(entrada == "salir")
    {
        salir();
    }
    else if (entrada == "exec")
    {
        exec(ruta);
    }
    
    else
    {
        cout<<"Comando Incorrecto"<<endl;
    }

}

int main()
{
    cout<<"Tarea No.2 - Manejo E Implementacion de Archivos"<<endl;
    cout<<"Luis Alfredo Vejo Mendoza - 201212527"<<endl;
    cout<<"Ingrese un comando:  "<<endl;
    cin>>entrada;
    analizador(entrada);

    
       
}



