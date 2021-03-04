#include <iostream>
using namespace std;
int Factorial (int a);

int main(){
    int N1;
    cout << "Introduzca el valor del numero: ";
    cin >> N1;
   int Fact = Factorial (N1);
    cout << "El factorial del numero es: " << Fact;
}


int Factorial (int a){
    int i;
    int resultado = 1;
    for (int i=1; i<=a; i = i + 1)
        resultado *=i;
    return resultado;
    }



