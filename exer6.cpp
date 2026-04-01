#include <iostream>
#include <cmath> // para usar sqrt
using namespace std;

int main() {
    float n1, n2, media;

    cout << "Digite o primeiro valor: ";
    cin >> n1;

    cout << "Digite o segundo valor: ";
    cin >> n2;

    media = sqrt(n1 * n2);

    cout << "A media geometrica e: " << media << endl;

    return 0;
}