#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double valorHora;
    double horasNormais;
    double horasExtra;
    double percentualExtra;
    double taxaPlataforma;
 
    cout << fixed << setprecision(2);
 
    cout << "===== Faturamento - Programador Freelancer =====" << endl;
 
    cout << "Valor da hora normal (R$): ";
    cin >> valorHora;
 
    cout << "Quantidade de horas normais: ";
    cin >> horasNormais;
 
    cout << "Quantidade de horas extras: ";
    cin >> horasExtra;
 
    cout << "Percentual adicional para hora extra (%): ";
    cin >> percentualExtra;
 
    cout << "Taxa da plataforma (%): ";
    cin >> taxaPlataforma;
 
    double valorHorasNormais = valorHora * horasNormais;
    double valorHoraExtra = valorHora * (1.0 + percentualExtra / 100.0);
    double valorHorasExtras = valorHoraExtra * horasExtra;
 
    double faturamentoBruto = valorHorasNormais + valorHorasExtras;
    double valorTaxaPlataforma = faturamentoBruto * (taxaPlataforma / 100.0);
    double valorLiquido = faturamentoBruto - valorTaxaPlataforma;
 
    cout << "\n===== Resultado =====" << endl;
    cout << "Valor das horas normais:  R$ " << valorHorasNormais << endl;
    cout << "Valor das horas extras:   R$ " << valorHorasExtras << endl;
    cout << "Faturamento bruto:        R$ " << faturamentoBruto << endl;
    cout << "Taxa da plataforma:       R$ " << valorTaxaPlataforma << endl;
    cout << "Valor liquido recebido:   R$ " << valorLiquido << endl;
 
    return 0;
}
 
