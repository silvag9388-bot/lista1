#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float diametro, raio, area;

    cout << "Digite o diametro do circulo: ";
    cin >> diametro;

    raio = diametro / 2;

    // Fórmula da área: A = p * r²
    area = M_PI * pow(raio, 2);

    cout << "A area do circulo e: " << area << endl;

    return 0;
}