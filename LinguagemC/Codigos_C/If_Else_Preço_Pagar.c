#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Constantes para os preços das maçãs
#define PRECO_MENOS_DE_UMA_DZ 1.30
#define PRECO_PELO_MENOS_UMA_DZ 1.10
#define DOZE 12

// Função principal
int main() {
    int quantidade;
    float preco;

    // Solicita ao usuário que insira a quantidade de maçãs desejadas
    printf("Digite a quantidade de maçãs desejadas: ");
    scanf("%d", &quantidade);

    // Calcula o preço a ser pago pelo cliente
    if (quantidade < DOZE) {
        preco = quantidade * PRECO_MENOS_DE_UMA_DZ;
    } else {
        preco = quantidade * PRECO_PELO_MENOS_UMA_DZ;
    }

    // Exibe o preço a ser pago pelo cliente
    printf("O preço a ser pago é R$ %.2f\n", preco);

    return 0;
}
