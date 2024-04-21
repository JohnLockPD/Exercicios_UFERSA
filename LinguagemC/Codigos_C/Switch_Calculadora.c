#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    char operacao;
    float num1, num2, resultado;

    // Solicita ao usu�rio que insira os dois n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);

    // Solicita ao usu�rio que escolha a opera��o
    printf("Escolha a opera��o (+, -, *, /): ");
    scanf(" %c", &operacao);

    // Realiza a opera��o selecionada
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("O resultado da adi��o �: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("O resultado da subtra��o �: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("O resultado da multiplica��o �: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("O resultado da divis�o �: %.2f\n", resultado);
            } else {
                printf("Divis�o indefinida! O denominador n�o pode ser zero.\n");
            }
            break;
        default:
            printf("Opera��o inv�lida!\n");
            break;
    }

    return 0;
}
