#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Este programa solicita ao usuário dois valores, calcula a soma e imprime o resultado na tela.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função para calcular a soma de dois valores e imprimir o resultado
void soma_e_imprime(int valor1, int valor2) {
    int resultado = valor1 + valor2;
    printf("A soma de %d e %d é: %d\n", valor1, valor2, resultado);
}

// Função principal
int main() {
    int numero1, numero2;

    // Solicita ao usuário que insira dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Chama a função soma_e_imprime para calcular a soma e imprimir o resultado
    soma_e_imprime(numero1, numero2);

    return 0;
}
