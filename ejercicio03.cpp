//Calculo de la hipotenusa 
#include <iostream>
#include <cmath>
using namespace std;
float hipotenusa (float a, float b);

float hipotenusa (float a, float b){
    return sqrt(pow(a,2) + pow(b,2));
}

int main (){
    float a, b;
    cout << "ingrese el valor del primer cateto: "; cin >> a;
    cout << "ingrese el valor del segundo cateto: "; cin >> b;
    cout << "el valor de la hipotenusa es: " << hipotenusa (a,b);
    return 0;
}