#include <iostream>
using namespace std;

int main() {
    float p1, p2, p3, p4, p5;
    float total, pagamento, troco;

    cout << "Digite o valor do produto 1: ";
    cin >> p1;

    cout << "Digite o valor do produto 2: ";
    cin >> p2;

    cout << "Digite o valor do produto 3: ";
    cin >> p3;

    cout << "Digite o valor do produto 4: ";
    cin >> p4;

    cout << "Digite o valor do produto 5: ";
    cin >> p5;

    total = p1 + p2 + p3 + p4 + p5;

    cout << "Total da compra: R$ " << total << endl;

    cout << "Digite o valor pago: ";
    cin >> pagamento;

    troco = pagamento - total;

    cout << "Troco: R$ " << troco << endl;

    return 0;
}