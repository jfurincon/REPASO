#include <iostream>

using namespace std;

int main(){
    int salarioHora = 40000;
    int salarioExtra = 0;
    int salarioTotal = 0;
    int horas;
    int horasExtra;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;
    horasExtra = horas - 35;
    if (horas > 35){
        salarioExtra = (horasExtra * 45000);
        salarioTotal = (salarioHora * horas) + salarioExtra;
    } else{
        salarioTotal = salarioHora * horas;
    }
    cout << "El salario total es: " << salarioTotal;
    return 0;
}