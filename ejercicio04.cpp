//Calculo de raices de una ecuacion cuadratica 
#include <iostream>
#include <cmath>
using namespace std;

float discriminante (int a, int b, int c);
void raices (int a, int b, int c);

float discriminante (int a, int b, int c){
    float d = pow(b,2) - 4 * a * c;
    return d;
}

void raices (int a, int b, int c){
    float raiz1, raiz2;
    if (discriminante(a,b,c) > 0){
        raiz1 = (-b + sqrt(discriminante(a,b,c)))/(2 * a);
        raiz2 = (-b - sqrt(discriminante(a,b,c)))/(2 * a);
        cout << "Las raices de la ecuacion son diferentes: "<< endl;
        cout << raiz1 << endl << raiz2 << endl;
    }
    else if (discriminante(a,b,c) == 0){
        float raizI = (-b)/(2 * a);
        cout << "Las raices de la ecuacion son iguales: "<< endl;
        cout << raizI << endl;
    }
    else {
        cout << "las raices de la ecuacion son numeros complejos." << endl;
    }
}

int main (){
    float a , b , c;
    cout << "ingrese el valor de la incognita a: "; cin >> a;
    cout << "ingrese el valor de la incognita b: "; cin >> b;
    cout << "ingrese el valor de la incognita c: "; cin >> c;

    if (a != 0){
        raices (a,b,c);
    } else {
        "la incognita a debe de ser diferente de 0";
    }
    return 0;
}