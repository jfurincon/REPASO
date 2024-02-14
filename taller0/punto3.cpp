#include <iostream>

using namespace std;

int main(){
    int prePosPago = 0;
    int valorEquipo = 0;
    int valorFinal = 0;

    cout << "Su plan es: \n 1. Prepago \n 2. Postpago \n";  
    cin >> prePosPago;
    cout << "Cual es el valor del equipo? \n";
    cin >> valorEquipo;

    switch(prePosPago){
        case 1:
            if (valorEquipo > 100000 && valorEquipo < 90000){
                cout << "Su desctuento es del 10%";
                valorFinal = valorEquipo - (valorEquipo * 0.10);
                cout << "El valor final del equipo es: " << valorFinal << "\n";
            } else if (valorEquipo > 1000000){
                cout << "Su desctuento es del 20%";
                valorFinal = valorEquipo - (valorEquipo * 0.20);
                cout << "El valor final del equipo es: " << valorFinal << "\n";
            } else {
                cout << "Usted no cuenta con ningun descuento \n";
                cout << "El valor final del equipo es: " << valorEquipo << "\n";
            }
            break;
        case 2:
            if (valorEquipo < 500000){
                cout << "Su descuento es del 15%";
                valorFinal = valorEquipo - (valorEquipo * 0.15);
                cout << "El valor final del equipo es: " << valorFinal << "\n";
            } else if (valorEquipo > 500000 && valorEquipo < 1000000){
                cout << "Su descuento es del 20%";
                valorFinal = valorEquipo - (valorEquipo * 0.20);
                cout << "El valor final del equipo es: " << valorFinal << "\n";
            } else if (valorEquipo > 1000000){
                cout << "Su descuento es del 25%";
                valorFinal = valorEquipo - (valorEquipo * 0.25);
                cout << "El valor final del equipo es: " << valorFinal << "\n";
            } else {
                cout << "Usted no cuenta con ningun descuento \n";
                cout << "El valor final del equipo es: " << valorEquipo << "\n";
            }
    }
}