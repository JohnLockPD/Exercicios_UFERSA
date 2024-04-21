#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar e mostra o resultado
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}
