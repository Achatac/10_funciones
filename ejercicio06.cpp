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

int main (){
    return 0;
}