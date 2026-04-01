#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    // Fórmula de conversão
    fahrenheit = (celsius * 9/5) + 32;

    cout << "Temperatura em Fahrenheit: " << fahrenheit << " °F" << endl;

    return 0;
}