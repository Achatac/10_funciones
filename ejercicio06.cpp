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
    if (Jusuario == Jcomputadora){
    return 0;
    }
    else if ((Jusuario == PIEDRA && Jcomputadora == TIJERA) || (Jusuario == PAPEL && Jcomputadora == PIEDRA) || (Jusuario == TIJERA && Jcomputadora == PAPEL)){
        return 1;
    }
    else {
        return -1;
    }
}

void MostrarJugadas (int jugada){
    cout << jugadas [jugada];
}

int main (){
    srand(static_cast<unsigned int>(time(0)));

    while (PuntajeDeUsuario < 3 && PuntajeDeComputadora < 3){
        cout << "----NUEVA RONDA!----" << endl;
        int JU = JugadaDeUsuario();
        int JC = JugadaDeComputadora();
        cout << "Tu jugadas es: ";
        MostrarJugadas (JU);
        cout << endl;
        cout << "La jugada de la computadora es: ";
        MostrarJugadas (JC);
        cout << endl << "------------------------" << endl;
        int ResultadoDeRonda = DeterminacionDelGanador(JU,JC);
        if (ResultadoDeRonda == 1){
            cout << "--- GANASTE LA RONDA! ---" << endl;
            PuntajeDeUsuario++;
        }
        else if (ResultadoDeRonda == -1){
            cout << "--- LA COMPUTADORA GANO LA RONDA! ---" << endl;
            PuntajeDeComputadora++;
        }
        else {
            cout << "--- EMPATE! ---" << endl;
        }
        cout << "Puntaje: Usuario - " << PuntajeDeUsuario << " , Computadora - " << PuntajeDeComputadora << endl;
    }
    cout << "--- RESULTADO FINAL ---" << endl;
    if (PuntajeDeUsuario == 3){
        cout << "Felicidades, ganaste el juego!";
    }
    else {
        cout << "La computadora gano el juego!";
    }
    return 0;
}