#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(nullptr)); // seed para el generador de numeros aleatorios conforme al tiempo
    int seleccion = 0;
    int lanzamiento = rand() % 2 + 1; // +1 para que el rango sea 1-2
    cout << "Lanzamiento: " << lanzamiento;

    cout << "Seleccione una opcion: 1 - Cara, 2 - Sello: ";
    cin >> seleccion;

    if(seleccion == lanzamiento){
        cout << "Match! Ganaste!!";
    }else{
        cout << "No match! Perdiste!!";
    }

}