#include <iostream>
using namespace std;

int main() {
    float milhas, quilometros;

    cout << "Digite o valor em milhas maritimas: ";
    cin >> milhas;

    // 1 milha maritima = 1852 metros = 1.852 km
    quilometros = milhas * 1.852;

    cout << "Valor em quilometros: " << quilometros << " km" << endl;

    return 0;
}
