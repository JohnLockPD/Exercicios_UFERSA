#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Este programa solicita ao usuário três valores e imprime o menor valor na tela.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função para encontrar o menor valor entre três números e imprimir na tela
void Menor(int num1, int num2, int num3) {
    int menor = num1;

    if (num2 < menor) {
        menor = num2;
    }

    if (num3 < menor) {
        menor = num3;
    }

    printf("O menor valor entre %d, %d e %d é: %d\n", num1, num2, num3, menor);
}

// Função principal
int main() {
    int numero1, numero2, numero3;

    // Solicita ao usuário que insira três números
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro número: ");
    scanf("%d", &numero3);

    // Chama a função Menor para encontrar e imprimir o menor valor
    Menor(numero1, numero2, numero3);

    return 0;
}
