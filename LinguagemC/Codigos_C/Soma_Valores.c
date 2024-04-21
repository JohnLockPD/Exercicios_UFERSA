#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Este programa solicita ao usu�rio dois valores e imprime a soma deles na tela.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para calcular a soma de dois valores
int soma(int valor1, int valor2) {
    return valor1 + valor2;
}

// Fun��o principal
int main() {
    int numero1, numero2;

    // Solicita ao usu�rio que insira dois n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &numero2);

    // Calcula a soma dos n�meros utilizando a fun��o soma
    int resultado = soma(numero1, numero2);

    // Exibe o resultado da soma na tela
    printf("A soma de %d e %d �: %d\n", numero1, numero2, resultado);

    return 0;
}
