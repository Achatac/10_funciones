//Generador de numeros aleatorios 
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main (){
    int cantidadDatos, maximo, numerosA;
    cout << "ingrese el valor maximo de los numeros aleatorios: "; cin >> maximo;
    cout << "ingrese las cantidad de numeros aleatorios: "; cin >> cantidadDatos;
    srand(static_cast<unsigned>(time(0)));
    cout << "Los numeros aleatorios generados son: " << endl;
    for (int i = 1; i <= cantidadDatos; i++){
        numersoA = rand() % (maximo + 1);
        cout << numeroAleatorio << endl;
    }
        return 0;
}