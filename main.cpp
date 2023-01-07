#include <iostream>

using namespace std;

int main()
{
    int valorA;
    float valorB;
    float dolar = 5.23;

    cout << "Conveter para real ou Dolar?\n\nDigite 1 para 'Real' e 2 para 'Dolar': ";
    cin >> valorA;

    if (valorA == 1){
        cout << "\nEscreva um valor em Dolar: ";
        cin >> valorB;
        valorB = valorB * dolar; 
        cout << valorB << " Reais";
    } else {
        cout << "\nEscreva um valor em Reais: ";
        cin >> valorB;
        valorB = valorB / dolar; 
        cout << valorB << " Dolares";
    }

    cin >> valorA;
    return 0;
}