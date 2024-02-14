#include <iostream>

using namespace std;

int main(){
    int deudaCliente = 0;
    int deutaDescuento = 0;
    cout << "Cual es el valor de su deuda? \n";
    cin >> deudaCliente;

    if (deudaCliente > 60000 && deudaCliente < 150000){
        cout << "Usted cuenta con un dcto del 20% \n";
        deutaDescuento = deudaCliente - (deudaCliente * 0.20);
        cout << "El valor de su deuda con descuento es: " << deutaDescuento << "\n";
    } else if (deudaCliente > 150000 && deudaCliente < 300000){
        cout << "Usted cuenta con un dcto del 30% \n";
        deutaDescuento = deudaCliente - (deudaCliente * 0.30);
        cout << "El valor de su deuda con descuento es: " << deutaDescuento << "\n";
    } else if (deudaCliente > 300000 && deudaCliente < 800000){
        cout << "Usted cuenta con un dcto del 40% \n";
        deutaDescuento = deudaCliente - (deudaCliente * 0.40);
        cout << "El valor de su deuda con descuento es: " << deutaDescuento << "\n";
    } else if (deudaCliente > 800000){
        cout << "Usted cuenta con un dcto del 50% \n";
        deutaDescuento = deudaCliente - (deudaCliente * 0.50);
        cout << "El valor de su deuda con descuento es: " << deutaDescuento << "\n";
    } else {
        cout << "Usted no cuenta con ningun descuento \n";
        cout << "El valor de su deuda es: " << deudaCliente << "\n";
    }
    return 0;
}
