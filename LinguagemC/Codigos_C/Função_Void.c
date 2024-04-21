#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Este programa solicita ao usu�rio dois valores, calcula a soma e imprime o resultado na tela.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para calcular a soma de dois valores e imprimir o resultado
void soma_e_imprime(int valor1, int valor2) {
    int resultado = valor1 + valor2;
    printf("A soma de %d e %d �: %d\n", valor1, valor2, resultado);
}

// Fun��o principal
int main() {
    int numero1, numero2;

    // Solicita ao usu�rio que insira dois n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &numero2);

    // Chama a fun��o soma_e_imprime para calcular a soma e imprimir o resultado
    soma_e_imprime(numero1, numero2);

    return 0;
}
