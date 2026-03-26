#include <iostream>

using namespace std;

int main() {
    double base, altura, area;

    cout << "Digite o valor da base do triangulo: ";
    cin >> base;

    cout << "Digite o valor da altura do triangulo: ";
    cin >> altura;

    // Fórmula: área = (base * altura) / 2
    area = (base * altura) / 2;

    cout << "A area do triangulo eh: " << area << endl;

    return 0;
}