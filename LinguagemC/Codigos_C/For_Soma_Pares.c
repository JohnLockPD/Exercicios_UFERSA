#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

int main() {
    int soma = 0;

    // Loop de 1 at� 500
    for (int i = 1; i <= 500; i++) {
        // Verifica se o n�mero � par
        if (i % 2 == 0) {
            soma += i; // Adiciona o n�mero � soma
        }
    }

    printf("O somat�rio dos valores pares de 1 a 500 �: %d\n", soma);

    return 0;
}
