#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, n4, media;

    cout << "Digite o primeiro valor: ";
    cin >> n1;

    cout << "Digite o segundo valor: ";
    cin >> n2;

    cout << "Digite o terceiro valor: ";
    cin >> n3;

    cout << "Digite o quarto valor: ";
    cin >> n4;

    media = (n1 + n2 + n3 + n4) / 4;

    cout << "A media aritmetica e: " << media << endl;

    return 0;
}