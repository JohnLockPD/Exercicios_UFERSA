#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    char operacao;
    float num1, num2, resultado;

    // Solicita ao usuário que insira os dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Solicita ao usuário que escolha a operação
    printf("Escolha a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    // Realiza a operação selecionada
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("O resultado da adição é: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("O resultado da subtração é: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("O resultado da multiplicação é: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("O resultado da divisão é: %.2f\n", resultado);
            } else {
                printf("Divisão indefinida! O denominador não pode ser zero.\n");
            }
            break;
        default:
            printf("Operação inválida!\n");
            break;
    }

    return 0;
}
