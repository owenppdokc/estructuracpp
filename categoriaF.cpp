# include <iostream>
# include <string.h>
# include "estructura.h"
#define MAX 100

using namespace std;

categoria categorias[MAX];
int pos=0;
/*CRUD*/
/*  C crear
    R leer
    U actualizar
    D eliminar*/
void agregarCategoria(int id, char nombre[]);
void mostrarCategoria(int i);
void mostrarCategorias();
bool existeCategoria(int id);
void eliminarCategoria(int id);
void editarCategoria(int id, char nombre[]);



void agregarCategoria(int id, char nombre[]){
categorias[pos].idCat=id;
strcpy (categorias[pos].nombre, nombre);
pos++;
}

void mostrarCategoria(int i){
    cout << "ID: "<< categorias[i].idCat<<endl;
    cout << "NOMBRE:" << categorias[i].nombre << endl;
}

void mostrarCategorias(){
    for(int i; i < pos; i++)
{
    cout << "ID: "<< categorias[i].idCat<<endl;
    cout << "NOMBRE:" << categorias[i].nombre << endl;
}
}
bool existeCategoria(int id){
    bool existe=false;
    int i = 0;
    while(i<pos)
    {
        if(categorias[i].idCat ==id)
        {
            existe = true;
            break;
        }
        i++;
    }
    return existe;
}
