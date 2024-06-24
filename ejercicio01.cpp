//Calculo del area de un circulo 
#include <iostream>
#include <cmath>
using namespace std;

double area (double radio);
double area (double radio){
    return M_PI * pow(radio,2);
}

int main (){
    double radio;
    cout << "ingrese el radio del circulo: "; cin >> radio;
    if (radio <= 0){
        cout << "medida no valida." << endl;
    } else {
        cout << "el area del circulo es: " << area (radio);
    }
    return 0;
}
