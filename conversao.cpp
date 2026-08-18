#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double notaTrabalho, notaProjeto, notaProva, notaSeminario;
 
    const double PESO_TRABALHO = 0.20;
    const double PESO_PROJETO = 0.30;
    const double PESO_PROVA = 0.30;
    const double PESO_SEMINARIO = 0.20;
    const double MEDIA_APROVACAO = 7.0;
    const double MEDIA_RECUPERACAO_MIN = 5.0;
 
    cout << fixed << setprecision(2);
 
    cout << "===== Sistema de Notas - Engenharia de Software =====" << endl;
 
    cout << "Nota do Trabalho (peso 20%): ";
    cin >> notaTrabalho;
 
    cout << "Nota do Projeto (peso 30%): ";
    cin >> notaProjeto;
 
    cout << "Nota da Prova (peso 30%): ";
    cin >> notaProva;
 
    cout << "Nota do Seminario (peso 20%): ";
    cin >> notaSeminario;
 
    double mediaPonderada = (notaTrabalho * PESO_TRABALHO) +
                             (notaProjeto * PESO_PROJETO) +
                             (notaProva * PESO_PROVA) +
                             (notaSeminario * PESO_SEMINARIO);
 
    cout << "\n===== Resultado =====" << endl;
    cout << "Media ponderada: " << mediaPonderada << endl;
 
    if (mediaPonderada >= MEDIA_APROVACAO) {
        cout << "Situacao: APROVADO" << endl;
    } else if (mediaPonderada >= MEDIA_RECUPERACAO_MIN) {
        cout << "Situacao: RECUPERACAO" << endl;
    } else {
        cout << "Situacao: REPROVADO" << endl;
    }
 
    // Desafio: pontos que faltaram para alcancar a media 7
    if (mediaPonderada < MEDIA_APROVACAO) {
        double pontosFaltantes = MEDIA_APROVACAO - mediaPonderada;
        cout << "Pontos que faltaram para media 7: " << pontosFaltantes << endl;
    } else {
        cout << "Pontos que faltaram para media 7: 0.00 (meta atingida)" << endl;
    }
 
    return 0;
}
 
