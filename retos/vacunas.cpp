# include <iostream>
using namespace std;

int main(){
    float dosi_vacuna = 0;
    float peso = 0;
    float meses = 0;

    cout << "Ingrese el peso del niño: ";
    cin >> peso;
    cout << "Ingrese la edad del niño en meses: ";
    cin >> meses;
    dosi_vacuna = ((peso + 10) / (meses * 10)) * 8;
    cout << "La dosis de vacuna es de: " << dosi_vacuna;
    return 0;
}