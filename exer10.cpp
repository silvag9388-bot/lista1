#include <iostream>
using namespace std;

int main() {
    float cotacao, dolares, reais;

    cout << "Digite a cotacao do dolar: ";
    cin >> cotacao;

    cout << "Digite a quantidade de dolares: ";
    cin >> dolares;

    reais = cotacao * dolares;

    cout << "Valor em reais: R$ " << reais << endl;

    return 0;
}