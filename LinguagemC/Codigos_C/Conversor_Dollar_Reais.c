#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    float cotacao_dolar, valor_real, valor_dolar;

    // Solicita ao usu�rio que insira a cota��o do d�lar atual
    printf("Digite a cota��o do d�lar atual: ");
    scanf("%f", &cotacao_dolar);

    // Solicita ao usu�rio que insira o valor em reais a ser convertido
    printf("Digite o valor em reais a ser convertido: ");
    scanf("%f", &valor_real);

    // Calcula o valor em d�lar
    valor_dolar = valor_real / cotacao_dolar;

    // Exibe o resultado da convers�o
    printf("O valor em d�lar �: %.2f\n", valor_dolar);

    return 0;
}
