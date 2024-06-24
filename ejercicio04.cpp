//Calculo de raices de una ecuacion cuadratica 
#include <iostream>
#include <cmath>
using namespace std;

discriminante (int a, int b, int c);
raices (int a, int b, int a);

discriminante (int a, int b, int c){
    float d = pow(b,2) - 4 * a * c;
    return d;
}

raices (int a, int b, int c){
    float raiz1, raiz2;
    if (discriminante(a,b,c) > 0){
        raiz1 = (-b + sqrt(discriminante(a,b,c)))/2 * a;
        raiz2 = (-b - sqrt(discriminante(a,b,c)))/2 * a;
        cout << "Las raices de la ecuacion son: "<< endl;
    }
    else if (discriminante(a,b,c) == 0){

    }
    else {

    }
    
}



int main (){
    return 0;
}