#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    int numero, i;

    // Solicita ao usuário que insira o número para mostrar a tabuada
    printf("Digite um número para mostrar a tabuada: ");
    scanf("%d", &numero);

    // Mostra a tabuada do número escolhido pelo usuário
    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
