#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

int main() {
    // Loop para cada n�mero no intervalo de 1 a 11
    for (int i = 1; i <= 11; i++) {
        // Verifica se o n�mero � �mpar
        if (i % 2 != 0) {
            // Calcula o fatorial do n�mero �mpar
            int fatorial = 1;
            for (int j = 1; j <= i; j++) {
                fatorial *= j;
            }
            // Exibe o resultado
            printf("%d! = %d\n", i, fatorial);
        }
    }
    return 0;
}
