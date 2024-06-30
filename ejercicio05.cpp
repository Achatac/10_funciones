//funcion CalcularRaices 
#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices (float a, float b, float c, float &raiz1 , float &raiz2, float &siEsReal);

void calcularRaices (float a, float b, float c, float &raiz1 , float &raiz2, float &siEsReal){  //se elimino la funcion discriminante 

    float discriminante = pow(b, 2) - 4 * a * c;

    if (discriminante >= 0) {
        siEsReal = true;
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
    } else {
        siEsReal = false;
        raiz1 = -b / (2 * a);
        raiz2 = sqrt(-discriminante) / (2 * a); //parte imaginaria
    }
}

int main (){
    float a , b , c, raiz1, raiz2, siEsReal;
    cout << "ingrese el valor de la incognita a: "; cin >> a;
    cout << "ingrese el valor de la incognita b: "; cin >> b;
    cout << "ingrese el valor de la incognita c: "; cin >> c;
    return 0;
}