#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    int numero1, numero2;

    // Solicita ao usuário que insira dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Calcula o dobro do primeiro número
    int dobro_numero1 = numero1 * 2;

    // Calcula o triplo do segundo número
    int triplo_numero2 = numero2 * 3;

    // Exibe o dobro do primeiro número e o triplo do segundo número
    printf("O dobro do primeiro número é: %d\n", dobro_numero1);
    printf("O triplo do segundo número é: %d\n", triplo_numero2);

    return 0;
}
