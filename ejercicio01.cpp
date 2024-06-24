#include <iostream>
using namespace std;

int saldo = 0;
void depositar ();
void retirar ();
void mostrarSalir ();

void depositar (){ // funcion para depositar dinero
    saldo += 100;
    cout << "Se han depositado 100 unidades. Nuevo saldo: "<< saldo << endl;
}

void retirar (){ //funcion para retirar dinero
    if (saldo >= 100){
        saldo -= 100;
        cout << "Se ha retirado 100 unidades. Nuevo saldo: "<< saldo << endl;
    }
    else {
        cout << "Saldo insuficiente." << endl;
    }
}

void mostrarSalir (){ // funcion para mostrar el saldo 
    cout << "Saldo actual: " << saldo << endl;
}

void menu (){
    int opcion;
    do {
        cout << "/n-- Cajero Automatico ---" << endl;
        cout << "1. Depositar 100" << endl;
        cout << "2. Retirar 100" << endl;
        cout << "3. Mostrar Saldo" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion){
            case 1:
            depositar();
            break;
            case 2:
            retirar ();
            break;
            case 3:
            mostrarSalir ();
            break;
            case 4:
                cout << "saliendo..." << endl;
            break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 4);
}



int main (){
    menu ();
    return 0;
}