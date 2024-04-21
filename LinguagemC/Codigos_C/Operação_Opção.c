#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    float num1, num2, resultado;
    char operacao;

    // Solicita ao usu�rio que insira dois valores e a opera��o desejada
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    printf("Digite a opera��o desejada (soma, subtracao, multiplicacao, divisao): ");
    scanf(" %c", &operacao);

    // Executa a opera��o desejada e imprime o resultado
    switch (operacao) {
        case 's':
        case 'S':
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 'm':
        case 'M':
            resultado = num1 - num2;
            printf("Resultado da subtra��o: %.2f\n", resultado);
            break;
        case 'd':
        case 'D':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divis�o: %.2f\n", resultado);
            } else {
                printf("N�o � poss�vel dividir por zero.\n");
            }
            break;
        case 'p':
        case 'P':
            resultado = num1 * num2;
            printf("Resultado da multiplica��o: %.2f\n", resultado);
            break;
        default:
            printf("Opera��o inv�lida.\n");
    }

    return 0;
}
