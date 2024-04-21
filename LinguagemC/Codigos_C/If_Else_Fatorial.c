#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

int main() {
    int n;

    // Solicita e l� o valor de n
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    // Verifica se n � negativo
    if (n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        // Calcula o fatorial de n
        int fatorial = 1;
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        
        // Exibe o resultado
        printf("%d! = %d\n", n, fatorial);
    }

    return 0;
}
