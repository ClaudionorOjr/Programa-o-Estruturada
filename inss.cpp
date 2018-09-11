#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const double FAIXA1 = 1693.72, FAIXA2 = 2822.9, TETO = 5645.8;
    const double TAXA1 = 0.08, TAXA2 = 0.09, TAXA_TETO = 0.11;
    double salarioLiquido, salarioBruto, descontoINSS;
    cout << "Digite o valor do salário do trabalhador: ";
    cin >> salarioBruto;
    if (salarioBruto <= FAIXA1)
        descontoINSS = TAXA1 * salarioBruto;
        
    else if (salarioBruto <= FAIXA2)
        descontoINSS = TAXA2 * salarioBruto;
        
    else if(salarioBruto <= TETO)
        descontoINSS = TAXA_TETO * salarioBruto;
        
    else 
        descontoINSS = TAXA_TETO * TETO;
    salarioLiquido = salarioBruto - descontoINSS;
    cout << fixed << setprecision(2);
    cout << "O desconto do INSS foi de:" << descontoINSS << endl;
    cout <<  "O salário líquido do trabalhador é: " << salarioLiquido << endl;
    return 0;
}
