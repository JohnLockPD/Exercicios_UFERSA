#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    int numero;

    // Solicita ao usu�rio que insira um valor inteiro
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � positivo, negativo ou neutro e exibe o resultado
    if (numero > 0) {
        printf("O n�mero � positivo.\n");
    } else if (numero < 0) {
        printf("O n�mero � negativo.\n");
    } else {
        printf("O n�mero � neutro.\n");
    }

    return 0;
}
