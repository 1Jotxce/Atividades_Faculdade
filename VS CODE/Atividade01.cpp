#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float distancia, consumo, preco, litros, gasto; 

    cout << "digite a distancia da viagem (km): ";
    cin >> distancia;

    cout << "digite o consumo do veiculo (km por litro): ";
    cin >> consumo;

    cout << "digite o preco do litro do combustivel (R$): ";
    cin >> preco;

    litros = distancia / consumo;
    gasto = litros * preco;
    
    cout << "o valor estimado a ser gasto com combustivel é: R$ " << gasto << endl;

    return 0;
}