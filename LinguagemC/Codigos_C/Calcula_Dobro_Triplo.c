#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    int numero1, numero2;

    // Solicita ao usu�rio que insira dois n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &numero2);

    // Calcula o dobro do primeiro n�mero
    int dobro_numero1 = numero1 * 2;

    // Calcula o triplo do segundo n�mero
    int triplo_numero2 = numero2 * 3;

    // Exibe o dobro do primeiro n�mero e o triplo do segundo n�mero
    printf("O dobro do primeiro n�mero �: %d\n", dobro_numero1);
    printf("O triplo do segundo n�mero �: %d\n", triplo_numero2);

    return 0;
}
