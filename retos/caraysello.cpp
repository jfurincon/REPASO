# include <iostream>
using namespace std;

int main(){
    int seleccion = 0;
    int lanzamiento = 1;
    cout << "Seleccione una opcion: 1 - Cara, 2 - Sello: ";
    cin >> seleccion;
    if(seleccion == lanzamiento){
        cout << "Match! Ganaste!!";
    }else{
        cout << "No match! Perdiste!!";
    }
}