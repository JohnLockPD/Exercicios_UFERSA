#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

int main() {
    int total = 0;

    // Loop de 10 at� 50
    for (int i = 10; i <= 50; i++) {
        // Verifica se o n�mero � divis�vel por 2
        if (i % 2 == 0) {
            printf("%d ", i); // Exibe o n�mero
            total++; // Incrementa o contador de n�meros exibidos
        }
    }

    printf("\nTotal de numeros divis�veis por 2: %d\n", total);

    return 0;
}
