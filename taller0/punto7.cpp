#include <iostream> 

using namespace std;

int main(){
    int f = 1;
    int resultado = 0;
    while (f < 100){
        resultado = resultado + f;
        cout << resultado << endl;
        f++;
    }
    return 0;
    
}