#include <iostream>
#include <iomanip>

 
using namespace std;
 
int main() {
    double aluguel;
    double alimentacao;
    double transporte;
    double internet;
    double lazer;
    double material;
 
    const int DIAS_MES = 30;
    const int MESES_ANO = 12;
 
    cout << fixed << setprecision(2);
 
    cout << "===== Custo de Vida - Estudante da UEM =====" << endl;
 
    cout << "Aluguel: R$ ";
    cin >> aluguel;
 
    cout << "Alimentacao: R$ ";
    cin >> alimentacao;
 
    cout << "Transporte: R$ ";
    cin >> transporte;
 
    cout << "Internet: R$ ";
    cin >> internet;
 
    cout << "Lazer: R$ ";
    cin >> lazer;
 
    cout << "Material academico: R$ ";
    cin >> material;
 
    double gastoMensal = aluguel + alimentacao + transporte + internet + lazer + material;
    double gastoAnual = gastoMensal * MESES_ANO;
    double gastoMedioDiario = gastoMensal / DIAS_MES;
    double percentualAluguel = (aluguel / gastoMensal) * 100.0;
 
    cout << "\n===== Resultado =====" << endl;
    cout << "Gasto mensal:              R$ " << gastoMensal << endl;
    cout << "Gasto anual:                R$ " << gastoAnual << endl;
    cout << "Gasto medio diario:         R$ " << gastoMedioDiario << endl;
    cout << "Percentual gasto c/ aluguel: " << percentualAluguel << "%" << endl;
 
    return 0;
}

