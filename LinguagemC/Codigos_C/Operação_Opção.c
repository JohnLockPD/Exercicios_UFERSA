#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    float num1, num2, resultado;
    char operacao;

    // Solicita ao usuário que insira dois valores e a operação desejada
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    printf("Digite a operação desejada (soma, subtracao, multiplicacao, divisao): ");
    scanf(" %c", &operacao);

    // Executa a operação desejada e imprime o resultado
    switch (operacao) {
        case 's':
        case 'S':
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 'm':
        case 'M':
            resultado = num1 - num2;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case 'd':
        case 'D':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divisão: %.2f\n", resultado);
            } else {
                printf("Não é possível dividir por zero.\n");
            }
            break;
        case 'p':
        case 'P':
            resultado = num1 * num2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        default:
            printf("Operação inválida.\n");
    }

    return 0;
}
