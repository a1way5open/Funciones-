#include <iostream>
using namespace std;
float suma ( float a, float b);
int main(){
    float a;
    float b;
    cout << "Introduce el valor del primer operando:";
    cin >> a;
    cout << "Introduce el valor del segundo operando:";
    cin >> b;

    float resultado = suma (a,b)
    cout << "El resultado es: " << resultado;
}

float suma (float a, float b){
return a+b;
}
