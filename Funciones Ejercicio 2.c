#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << "Introduce el valor del primer operando:" << endl ;
    cin >> a;
    cout << "Introduce el valor del segundo operando:"<< endl;
    cin >> b;

if (a>b){
    cout << "El primer operando es mayor que el segundo" << endl;
}
else if (a<b){
    cout << "El segundo operando es mayor que el segundo" << endl;
}
else {
    cout << "Error";
}
    return 0;
}
