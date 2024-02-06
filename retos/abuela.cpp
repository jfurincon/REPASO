# include <iostream>
using namespace std;


int main(){
    float grados_farenheit = 0;
    float ecuacion = 0; 
    cout << "Ingrese los grados farenheit: ";
    cin >> grados_farenheit;
    ecuacion = (grados_farenheit - 32) / 1.8;
    cout << "Grados Celsius: " << ecuacion;
    return 0;
}