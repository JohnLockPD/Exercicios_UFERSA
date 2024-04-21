#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    int numerador, denominador;

    // Solicita ao usuário que insira o numerador e o denominador
    printf("Digite o numerador: ");
    scanf("%d", &numerador);
    printf("Digite o denominador: ");
    scanf("%d", &denominador);

    // Verifica se o denominador é zero
    if (denominador == 0) {
        printf("Divisão indefinida! O denominador não pode ser zero.\n");
    } else {
        // Verifica se a divisão é exata
        if (numerador % denominador == 0) {
            printf("É divisível!\n");
        } else {
            printf("Não é divisível!\n");
        }
    }

    return 0;
}
