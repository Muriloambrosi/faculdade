#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double consumoKwh;
    double precoKwh;
    double taxaBandeira;
    double iluminacaoPublica;
    double outrasTaxas;
 
    const int MESES_ANO = 12;
 
    cout << fixed << setprecision(2);
 
    cout << "===== Conta de Energia Eletrica - Londrina =====" << endl;
 
    cout << "Consumo (kWh): ";
    cin >> consumoKwh;
 
    cout << "Preco por kWh (R$): ";
    cin >> precoKwh;
 
    cout << "Taxa de bandeira (R$): ";
    cin >> taxaBandeira;
 
    cout << "Iluminacao publica (R$): ";
    cin >> iluminacaoPublica;
 
    cout << "Outras taxas (R$): ";
    cin >> outrasTaxas;
 
    double custoEnergia = consumoKwh * precoKwh;
    double valorTotal = custoEnergia + taxaBandeira + iluminacaoPublica + outrasTaxas;
    double custoMedioKwh = valorTotal / consumoKwh;
    double custoAnual = valorTotal * MESES_ANO;
 
    cout << "\n===== Resultado =====" << endl;
    cout << "Custo de energia (consumo x preco): R$ " << custoEnergia << endl;
    cout << "Valor total da conta:               R$ " << valorTotal << endl;
    cout << "Custo medio por kWh:                 R$ " << custoMedioKwh << endl;
    cout << "Custo anual (12 meses):              R$ " << custoAnual << endl;
 
    return 0;
}
 
