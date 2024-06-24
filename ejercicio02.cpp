//Generador de numeros aleatorios 
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main (){
    int cantidadDatos, maximo;
    cout << "ingrese el valor maximo de los numeros aleatorios: "; cin >> maximo;
    cout << "ingrese las cantidad de numeros aleatorios: "; cin >> cantidadDatos;
    srand(static_cast<unsigned>(time(0)));
    return 0;
}