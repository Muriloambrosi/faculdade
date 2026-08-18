#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double aluguel, alimentacao, transporte, internet, material, lazer;
 
    const double VALOR_BOLSA = 1500.00;
 
    cout << fixed << setprecision(2);
 
    cout << "===== Controle de Bolsa de Estudos =====" << endl;
    cout << "Valor da bolsa: R$ " << VALOR_BOLSA << endl << endl;
 
    cout << "Aluguel: R$ ";
    cin >> aluguel;
 
    cout << "Alimentacao: R$ ";
    cin >> alimentacao;
 
    cout << "Transporte: R$ ";
    cin >> transporte;
 
    cout << "Internet: R$ ";
    cin >> internet;
 
    cout << "Material academico: R$ ";
    cin >> material;
 
    cout << "Lazer: R$ ";
    cin >> lazer;
 
    double totalDespesas = aluguel + alimentacao + transporte + internet + material + lazer;
    double saldoRestante = VALOR_BOLSA - totalDespesas;
    double percentualUtilizado = (totalDespesas / VALOR_BOLSA) * 100.0;
    double percentualRestante = 100.0 - percentualUtilizado;
 
    cout << "\n===== Resultado =====" << endl;
    cout << "Total das despesas:          R$ " << totalDespesas << endl;
    cout << "Saldo restante:              R$ " << saldoRestante << endl;
    cout << "Percentual da bolsa usado:    " << percentualUtilizado << "%" << endl;
    cout << "Percentual da bolsa restante: " << percentualRestante << "%" << endl;
 
    
    if (saldoRestante >= 0) {
        cout << "Situacao final do mes: SALDO POSITIVO" << endl;
    } else {
        cout << "Situacao final do mes: SALDO NEGATIVO" << endl;
    }
 
    return 0;
}
 
