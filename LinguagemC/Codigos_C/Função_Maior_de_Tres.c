#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o para determinar o maior n�mero entre tr�s n�meros inteiros
int encontrar_maior(int num1, int num2, int num3) {
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
    int num1, num2, num3;

    // Solicita ao usu�rio que insira tr�s n�meros inteiros
    printf("Digite tr�s n�meros inteiros diferentes:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Chama a fun��o para determinar o maior n�mero e o imprime
    int maior = encontrar_maior(num1, num2, num3);
    printf("O maior n�mero �: %d\n", maior);

    return 0;
}
