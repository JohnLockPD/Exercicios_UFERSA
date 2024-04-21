#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Este programa solicita ao usu�rio dois valores e realiza diversas opera��es matem�ticas.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para calcular e imprimir a soma de dois n�meros
void soma(int num1, int num2) {
    printf("Soma: %d + %d = %d\n", num1, num2, num1 + num2);
}

// Fun��o para calcular e imprimir a subtra��o de dois n�meros
void subtracao(int num1, int num2) {
    printf("Subtra��o: %d - %d = %d\n", num1, num2, num1 - num2);
}

// Fun��o para calcular e imprimir a multiplica��o de dois n�meros
void multiplicacao(int num1, int num2) {
    printf("Multiplica��o: %d * %d = %d\n", num1, num2, num1 * num2);
}

// Fun��o para calcular e imprimir a divis�o de dois n�meros
void divisao(int num1, int num2) {
    if (num2 != 0) {
        printf("Divis�o: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    } else {
        printf("N�o � poss�vel dividir por zero.\n");
    }
}

// Fun��o principal
int main() {
    int numero1, numero2;

    // Solicita ao usu�rio que insira dois n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &numero2);

    // Chama as fun��es para calcular e imprimir a soma, subtra��o, multiplica��o e divis�o
    soma(numero1, numero2);
    subtracao(numero1, numero2);
    multiplicacao(numero1, numero2);
    divisao(numero1, numero2);

    return 0;
}
