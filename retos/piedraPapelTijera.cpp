#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(nullptr)); // seed para el generador de numeros aleatorios conforme al tiempo
    int seleccion = 0;
    int seleccionMaquina = rand() % 3 + 1; // +1 para que el rango sea 1-3, es decir 3 elecciones

    cout << "Seleccione una opcion: 1 - Piedra, 2 - Papel, 3 - Tijera: ";
    cin >> seleccion;

    switch (seleccionMaquina){ // switch para mostrar la eleccion de la maquina
        case 1:
            cout << "La maquina selecciono Piedra \n";
            if (seleccion == 1){ // if para comparar la eleccion del usuario con la de la maquina
                cout << "Empate";
            } else if (seleccion == 2){
                cout << "Ganaste";
            } else {
                cout << "Perdiste";
            }
            break;
        case 2:
            cout << "La maquina selecciono Papel \n";
            if (seleccion == 1){
                cout << "Perdiste";
            } else if (seleccion == 2){
                cout << "Empate";
            } else {
                cout << "Ganaste";
            }
            break;
        case 3:
            cout << "La maquina selecciono Tijera \n";
            if (seleccion == 1){
                cout << "Ganaste";
            } else if (seleccion == 2){
                cout << "Perdiste";
            } else {
                cout << "Empate";
            }
            break;
    }
}