#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int qtdEstudante, qtdProfissional, qtdEmpresarial;
 
    const double PRECO_ESTUDANTE = 50.00;
    const double PRECO_PROFISSIONAL = 120.00;
    const double PRECO_EMPRESARIAL = 250.00;
    const double LIMITE_DESCONTO = 20000.00;
    const double PERCENTUAL_DESCONTO = 5.0;
 
    cout << fixed << setprecision(2);
 
    cout << "===== Evento de Tecnologia - Curitiba =====" << endl;
 
    cout << "Quantidade de ingressos Estudante (R$ 50,00): ";
    cin >> qtdEstudante;
 
    cout << "Quantidade de ingressos Profissional (R$ 120,00): ";
    cin >> qtdProfissional;
 
    cout << "Quantidade de ingressos Empresarial (R$ 250,00): ";
    cin >> qtdEmpresarial;
 
    int totalParticipantes = qtdEstudante + qtdProfissional + qtdEmpresarial;
 
    double receitaEstudante = qtdEstudante * PRECO_ESTUDANTE;
    double receitaProfissional = qtdProfissional * PRECO_PROFISSIONAL;
    double receitaEmpresarial = qtdEmpresarial * PRECO_EMPRESARIAL;
 
    double receitaTotal = receitaEstudante + receitaProfissional + receitaEmpresarial;
 
    double desconto = 0.0;
    bool aplicouDesconto = false;
    if (receitaTotal > LIMITE_DESCONTO) {
        desconto = receitaTotal * (PERCENTUAL_DESCONTO / 100.0);
        receitaTotal = receitaTotal - desconto;
        aplicouDesconto = true;
    }
 
    double precoMedioParticipante = (totalParticipantes > 0) ? (receitaTotal / totalParticipantes) : 0.0;
 
    cout << "\n===== Resultado =====" << endl;
    cout << "Total de participantes:      " << totalParticipantes << endl;
    cout << "Receita de estudantes:       R$ " << receitaEstudante << endl;
    cout << "Receita de profissionais:    R$ " << receitaProfissional << endl;
    cout << "Receita empresarial:         R$ " << receitaEmpresarial << endl;
 
    if (aplicouDesconto) {
        cout << "Desconto aplicado (5%):      R$ " << desconto << endl;
    } else {
        cout << "Desconto aplicado:            Nenhum (receita <= R$ 20.000,00)" << endl;
    }
 
    cout << "Receita total:               R$ " << receitaTotal << endl;
    cout << "Preco medio por participante: R$ " << precoMedioParticipante << endl;
 
    return 0;
}
 
