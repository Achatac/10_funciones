//Juego de piedra, papel y tijera 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int JugadaDeUsuario ();
int JugadaDeComputadora ();
int DeterminacionDelGanador (int Jusuario, int Jcomputadora);
void MostrarJugadas (int jugada);

const string jugadas[] = {"Piedra" , "Papel" , "Tijera"};
int const PIEDRA = 0;
int const PAPEL = 1;
int const TIJERA = 2;

int JugadaDeUsuario (){
    int tuOpcion;
    do{
        cout << "Elige tu jugada: " << endl;
        cout << "0: PIEDRA" << endl << "1: PAPEL" << endl << "2. TIJERA" << endl; cin >> tuOpcion;
        if (tuOpcion < 0 || tuOpcion > 2) {
            cout << "Valor incorrecto, intente de nuevo." << endl;
        }
    } while (tuOpcion < 0 || tuOpcion > 2);
    return tuOpcion;
} 

int JugadaDeComputadora (){
    return rand() % 3;
}

int DeterminacionDelGanador (int Jusuario, int Jcomputadora){

}

void MostrarJugadas (int jugada){

}

int main (){
    return 0;
}