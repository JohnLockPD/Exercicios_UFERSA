#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    int numero, i;

    // Solicita ao usu�rio que insira o n�mero para mostrar a tabuada
    printf("Digite um n�mero para mostrar a tabuada: ");
    scanf("%d", &numero);

    // Mostra a tabuada do n�mero escolhido pelo usu�rio
    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
