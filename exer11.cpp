#include <iostream>
#include <cmath> // para usar pow()
using namespace std;

int main() {
    double x, y, resultado;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    resultado = pow(x, y);

    cout << "Resultado de x elevado a y: " << resultado << endl;

    return 0;
}