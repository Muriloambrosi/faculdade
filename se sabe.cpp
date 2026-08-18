#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    double salarioBruto;
    double percentualINSS;
    double percentualIR;
 
    cout << fixed << setprecision(2);
 
    cout << "===== Calculo de Salario Liquido =====" << endl;
 
    cout << "Digite o salario bruto: R$ ";
    cin >> salarioBruto;
 
    cout << "Digite o percentual de desconto do INSS (%): ";
    cin >> percentualINSS;
 
    cout << "Digite o percentual de desconto do IR (%): ";
    cin >> percentualIR;
 

    double valorINSS = salarioBruto * (percentualINSS / 100.0);
    double valorIR = salarioBruto * (percentualIR / 100.0);
    double salarioLiquido = salarioBruto - valorINSS - valorIR;
 
    cout << "\n= Resultado =" << endl;
    cout << "Salario bruto:        R$ " << salarioBruto << endl;
    cout << "Desconto INSS (" << percentualINSS << "%): R$ " << valorINSS << endl;
    cout << "Desconto IR   (" << percentualIR << "%): R$ " << valorIR << endl;
    cout << "Salario liquido:      R$ " << salarioLiquido << endl;
 
    return 0;
}

