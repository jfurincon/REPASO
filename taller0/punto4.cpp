#include <iostream>

using namespace std;

int main() {
    int sueldo;
    cout << "Ingrese su sueldo: ";
    cin >> sueldo;
    if (sueldo < 1000000){
        sueldo = sueldo + (sueldo * 0.15);
        cout << "Su sueldo con el aumento es: " << sueldo;
    } else{
        cout << "Su sueldo no tiene aumento";
    }
    return 0;
}