#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Este programa solicita ao usu�rio tr�s valores e imprime o menor valor na tela.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para encontrar o menor valor entre tr�s n�meros e imprimir na tela
void Menor(int num1, int num2, int num3) {
    int menor = num1;

    if (num2 < menor) {
        menor = num2;
    }

    if (num3 < menor) {
        menor = num3;
    }

    printf("O menor valor entre %d, %d e %d �: %d\n", num1, num2, num3, menor);
}

// Fun��o principal
int main() {
    int numero1, numero2, numero3;

    // Solicita ao usu�rio que insira tr�s n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro n�mero: ");
    scanf("%d", &numero3);

    // Chama a fun��o Menor para encontrar e imprimir o menor valor
    Menor(numero1, numero2, numero3);

    return 0;
}
