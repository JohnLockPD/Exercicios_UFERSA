#include <stdio.h>
#include <stdbool.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o para verificar se um n�mero � primo
bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int x, y;

    // Solicita e l� os valores de x e y
    printf("Digite o valor de x (n�mero natural maior que zero): ");
    scanf("%d", &x);
    printf("Digite o valor de y (n�mero natural maior que zero): ");
    scanf("%d", &y);

    // Verifica se x e y s�o v�lidos
    if (x <= 0 || y <= 0 || y < x) {
        printf("Intervalo inv�lido.\n");
        return 1;
    }

    // Exibe os n�meros primos no intervalo de x a y
    printf("N�meros primos entre %d e %d:\n", x, y);
    for (int i = x; i <= y; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
