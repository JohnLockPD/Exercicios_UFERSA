#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Constantes para os pre�os das ma��s
#define PRECO_MENOS_DE_UMA_DZ 1.30
#define PRECO_PELO_MENOS_UMA_DZ 1.10
#define DOZE 12

// Fun��o principal
int main() {
    int quantidade;
    float preco;

    // Solicita ao usu�rio que insira a quantidade de ma��s desejadas
    printf("Digite a quantidade de ma��s desejadas: ");
    scanf("%d", &quantidade);

    // Calcula o pre�o a ser pago pelo cliente
    if (quantidade < DOZE) {
        preco = quantidade * PRECO_MENOS_DE_UMA_DZ;
    } else {
        preco = quantidade * PRECO_PELO_MENOS_UMA_DZ;
    }

    // Exibe o pre�o a ser pago pelo cliente
    printf("O pre�o a ser pago � R$ %.2f\n", preco);

    return 0;
}
