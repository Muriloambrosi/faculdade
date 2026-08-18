#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
   
    int clientesBasico, clientesProfissional, clientesEmpresarial;
    double percentualDesconto, percentualTaxaProcessamento, percentualImpostos;
 
    const double MENSALIDADE_BASICO = 39.90;
    const double MENSALIDADE_PROFISSIONAL = 89.90;
    const double MENSALIDADE_EMPRESARIAL = 199.90;
 
    cout << fixed << setprecision(2);
 
    cout << "===== Plataforma SaaS Brasileira =====" << endl;
 
    cout << "Quantidade de clientes Basico (R$ 39,90): ";
    cin >> clientesBasico;
 
    cout << "Quantidade de clientes Profissional (R$ 89,90): ";
    cin >> clientesProfissional;
 
    cout << "Quantidade de clientes Empresarial (R$ 199,90): ";
    cin >> clientesEmpresarial;
 
    cout << "Percentual de desconto (%): ";
    cin >> percentualDesconto;
 
    cout << "Percentual de taxa de processamento (%): ";
    cin >> percentualTaxaProcessamento;
 
    cout << "Percentual de impostos (%): ";
    cin >> percentualImpostos;
 
    double receitaBasico = clientesBasico * MENSALIDADE_BASICO;
    double receitaProfissional = clientesProfissional * MENSALIDADE_PROFISSIONAL;
    double receitaEmpresarial = clientesEmpresarial * MENSALIDADE_EMPRESARIAL;
 
    double receitaBruta = receitaBasico + receitaProfissional + receitaEmpresarial;
 
    double valorDescontos = receitaBruta * (percentualDesconto / 100.0);
    double receitaAposDescontos = receitaBruta - valorDescontos;
 
    double impostos = receitaAposDescontos * (percentualImpostos / 100.0);
    double taxaProcessamento = receitaAposDescontos * (percentualTaxaProcessamento / 100.0);
 
    double receitaLiquida = receitaAposDescontos - impostos - taxaProcessamento;
 
    cout << "\n===== Resultado =====" << endl;
    cout << "Receita Basico:              R$ " << receitaBasico << endl;
    cout << "Receita Profissional:        R$ " << receitaProfissional << endl;
    cout << "Receita Empresarial:         R$ " << receitaEmpresarial << endl;
    cout << "Receita bruta:               R$ " << receitaBruta << endl;
    cout << "Valor dos descontos:         R$ " << valorDescontos << endl;
    cout << "Receita apos descontos:      R$ " << receitaAposDescontos << endl;
    cout << "Impostos:                    R$ " << impostos << endl;
    cout << "Taxa de processamento:       R$ " << taxaProcessamento << endl;
    cout << "Receita liquida:             R$ " << receitaLiquida << endl;
 
    return 0;
}
 
