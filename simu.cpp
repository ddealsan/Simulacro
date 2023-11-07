#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int limite;
    char respuesta;
    cout << "¿Desea calcular los triángulos pitagóricos hasta un límite? (s/n)" << endl;
    cin >> respuesta;
    if (respuesta== 's'){cout << "Escriba el límite"<< endl;
        cin >> limite;}
    else {limite=100;}

    for (int a = 1; a <= limite; a++) {
        for (int b = a; b <= limite; b++) {
            double c = sqrt(a*a+b*b);
            if (c == (int)c && a + b + c <= limite) {
                cout <<"a="<< a << " b= " << b << " c=" << c << endl;
            }
        }
    }
}
