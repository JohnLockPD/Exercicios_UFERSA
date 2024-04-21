#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Esta função retorna o maior de dois números inteiros passados como parâmetro.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função que retorna o maior de dois números inteiros
int maior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

// Função principal para testar a função maior
int main() {
    int numero1, numero2;

    // Solicita ao usuário que insira dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Chama a função maior e exibe o resultado
    printf("O maior número entre %d e %d é: %d\n", numero1, numero2, maior(numero1, numero2));

    return 0;
}
