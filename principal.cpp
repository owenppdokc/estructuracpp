#include <iostream>
#include "estructura.h"
using namespace std;
int main(int argc, char const *argv[])
{
    int cant;
    int cant
    cout << " Dime cuantas categorias deseas agregar:";
    cin >> cant;
    for(int i = 0; i < cant; i++)
    {
        cout <<"Ingrese el id: ";
        cin >> categorias[i].idCat;
        cout << "Ingrese el nombre: ";
        cin >> categorias[i].nombre;
    }
    cout << "Mostrar categorias\n";
    for(int i=0; i < cant; i++){
        cout << "ID:" << categorias[i].idCat << endl;
        cout << "Nombre: " <<categorias[i].nombre <<endl;
        cout << "====================\n";
    }
    cout << "Ingresa cuanto producto desea:";
    int cantidad 1;

    return 0;
}
