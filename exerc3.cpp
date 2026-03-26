#include <iostream>
#include <cmath> // para usar pow

using namespace std;

int main() {
    double diagonal, area;

    cout << "Digite o valor da diagonal do quadrado: ";
    cin >> diagonal;

    // Fórmula: área = (diagonal²) / 2
    area = pow(diagonal, 2) / 2;

    cout << "A area do quadrado eh: " << area << endl;

    return 0;
}