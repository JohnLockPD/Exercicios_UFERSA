#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Este programa solicita ao usuário três valores e imprime o maior valor na tela.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função para encontrar o maior valor entre três números
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

    // Chama a função Maior para encontrar o maior valor
    int maior_valor = Maior(numero1, numero2, numero3);

    // Exibe o maior valor na tela
    printf("O maior valor entre %d, %d e %d é: %d\n", numero1, numero2, numero3, maior_valor);

    return 0;
}
