#include <iostream>
#include <stdlib.h>

using namespace std;

string entrada;
string ruta;

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



