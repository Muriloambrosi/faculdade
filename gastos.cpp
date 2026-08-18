#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double valorReais;
    double cotacaoDolar;
    double cotacaoEuro;
 
    const double TAXA_OPERACAO = 1.5; // 1,5%
 
    cout << fixed << setprecision(2);
 
    cout << "===== Conversor de Moedas =====" << endl;
 
    cout << "Valor em reais: R$ ";
    cin >> valorReais;
 
    cout << "Cotacao do dolar (R$): ";
    cin >> cotacaoDolar;
 
    cout << "Cotacao do euro (R$): ";
    cin >> cotacaoEuro;
 
    double valorDolar = valorReais / cotacaoDolar;
    double valorEuro = valorReais / cotacaoEuro;
 
    double taxaDolar = valorDolar * (TAXA_OPERACAO / 100.0);
    double taxaEuro = valorEuro * (TAXA_OPERACAO / 100.0);
 
    double dolarLiquido = valorDolar - taxaDolar;
    double euroLiquido = valorEuro - taxaEuro;
 
    cout << "\n===== Resultado =====" << endl;
    cout << "Valor em reais:            R$ " << valorReais << endl;
 
    cout << "\n--- Dolar ---" << endl;
    cout << "Valor convertido em dolar:  US$ " << valorDolar << endl;
    cout << "Taxa da operacao (" << TAXA_OPERACAO << "%):   US$ " << taxaDolar << endl;
    cout << "Valor liquido em dolar:     US$ " << dolarLiquido << endl;
 
    cout << "\n--- Euro ---" << endl;
    cout << "Valor convertido em euro:   EUR " << valorEuro << endl;
    cout << "Taxa da operacao (" << TAXA_OPERACAO << "%):   EUR " << taxaEuro << endl;
    cout << "Valor liquido em euro:      EUR " << euroLiquido << endl;
 
    return 0;
}
 
