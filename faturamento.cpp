#include <iostream>
#include <iomanip>
#include <string>
 
using namespace std;
 
int main() {
    string nomeProjeto;
    int numeroProgramadores;
    double horasPorProgramador;
    double custoHoraProgramador;
    double infraestrutura;
    double software;
    double precoCliente;
    double percentualImposto;
    double percentualComissao;
 
    cout << fixed << setprecision(2);
 
    cout << "===== Startup de Maringa/PR - Dados do Projeto =====" << endl;
 
    cout << "Nome do projeto: ";
    getline(cin, nomeProjeto);
 
    cout << "Numero de programadores: ";
    cin >> numeroProgramadores;
 
    cout << "Horas por programador: ";
    cin >> horasPorProgramador;
 
    cout << "Custo da hora por programador (R$): ";
    cin >> custoHoraProgramador;
 
    cout << "Infraestrutura (R$): ";
    cin >> infraestrutura;
 
    cout << "Software (R$): ";
    cin >> software;
 
    cout << "Preco cobrado do cliente (R$): ";
    cin >> precoCliente;
 
    cout << "Percentual de imposto (%): ";
    cin >> percentualImposto;
 
    cout << "Percentual de comissao (%): ";
    cin >> percentualComissao;
 
   
    double maoDeObra = numeroProgramadores * horasPorProgramador * custoHoraProgramador;
 
    
    double custoTotal = maoDeObra + infraestrutura + software;
 

    double lucroBruto = precoCliente - custoTotal;
 
   
    double impostos = precoCliente * percentualImposto / 100.0;
 
  
    double comissao = precoCliente * percentualComissao / 100.0;
 
  
    double lucroLiquido = lucroBruto - impostos - comissao;
 
   
    double margemLucro = (lucroLiquido / precoCliente) * 100.0;
 
    cout << "\n==================================" << endl;
    cout << "       RELATORIO DO PROJETO" << endl;
    cout << "==================================" << endl;
    cout << "Projeto: " << nomeProjeto << endl;
    cout << "Programadores: " << numeroProgramadores << endl;
    cout << "Horas por programador: " << horasPorProgramador << endl;
    cout << "CUSTOS" << endl;
    cout << "----------------------------------" << endl;
    cout << "Mao de obra:       R$ " << setw(10) << maoDeObra << endl;
    cout << "Infraestrutura:    R$ " << setw(10) << infraestrutura << endl;
    cout << "Software:          R$ " << setw(10) << software << endl;
    cout << "Custo total:       R$ " << setw(10) << custoTotal << endl;
    cout << "RECEITA" << endl;
    cout << "----------------------------------" << endl;
    cout << "Valor contratado:  R$ " << setw(10) << precoCliente << endl;
    cout << "RESULTADO" << endl;
    cout << "----------------------------------" << endl;
    cout << "Impostos:          R$ " << setw(10) << impostos << endl;
    cout << "Comissao:          R$ " << setw(10) << comissao << endl;
    cout << "Lucro bruto:       R$ " << setw(10) << lucroBruto << endl;
    cout << "Lucro liquido:     R$ " << setw(10) << lucroLiquido << endl;
    cout << "Margem de lucro:   " << setw(10) << margemLucro << "%" << endl;
    cout << "==================================" << endl;
 
    return 0;
}
 
