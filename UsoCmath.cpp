#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double num;
    cout << "Ingrese un numero: "; cin >> num;

    cout << "Valor absoluto: " << fabs(num) << endl;
    cout << "Raiz cuadrada: " << sqrt(num) << endl;
    cout << "Potencia (2^n): " << pow (num,2) << endl;
    cout << "Redondeo al entero mas cercano: " << round(num) << endl;
    cout << "Redondeo haciaa ariba: " << ceil(num) << endl;
    cout << "Redondeo hacia abajo: " << floor(num) << endl;
    cout << "Seno: " << sin(num) << endl;
    cout << "Coseno: " << cos(num) << endl;
    cout << "Tangente: "<< tan(num) << endl;
    
    return 0;
}
