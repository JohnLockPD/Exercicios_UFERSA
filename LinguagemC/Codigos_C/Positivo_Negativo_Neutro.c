#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    int numero;

    // Solicita ao usuário que insira um valor inteiro
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo, negativo ou neutro e exibe o resultado
    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é neutro.\n");
    }

    return 0;
}
