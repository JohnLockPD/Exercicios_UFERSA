#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Este programa solicita ao usu�rio tr�s valores e imprime o maior valor na tela.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para encontrar o maior valor entre tr�s n�meros
int Maior(int num1, int num2, int num3) {
    int maior = num1;

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) {
        maior = num3;
    }

    return maior;
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

    // Chama a fun��o Maior para encontrar o maior valor
    int maior_valor = Maior(numero1, numero2, numero3);

    // Exibe o maior valor na tela
    printf("O maior valor entre %d, %d e %d �: %d\n", numero1, numero2, numero3, maior_valor);

    return 0;
}
