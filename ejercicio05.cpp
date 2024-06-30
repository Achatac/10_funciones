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

void raices (int a, int b, int c){
    float raiz1, raiz2;
    if (discriminante(a,b,c) > 0){
        raiz1 = (-b + sqrt(discriminante(a,b,c)))/(2 * a);
        raiz2 = (-b - sqrt(discriminante(a,b,c)))/(2 * a);
        cout << "Las raices de la ecuacion son diferentes: " << endl;
        cout << raiz1 << endl << raiz2 << endl;
    }
    else if (discriminante(a,b,c) == 0){
        float raizI = (-b)/(2 * a);
        cout << "Las raices de la ecuacion son iguales: " << endl;
        cout << raizI << endl;
    }
    else {
        cout << "Las raices de la ecuacion son numeros complejos." << endl;
    }
}


int main (){
    float a , b , c;
    cout << "Ingrese el valor de la incognita a: "; cin >> a;
    cout << "Ingrese el valor de la incognita b: "; cin >> b;
    cout << "Ingrese el valor de la incognita c: "; cin >> c;

    if (a != 0){
        raices (a,b,c);
    } else {
        cout << "la incognita a debe de ser diferente de 0.";
    }
    return 0;
}