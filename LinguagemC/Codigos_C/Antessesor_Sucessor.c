#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    int numero, antecessor, sucessor;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Calcula o antecessor e o sucessor do número inserido
    antecessor = numero - 1;
    sucessor = numero + 1;

    // Apresenta o antecessor e o sucessor do número inserido
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}
