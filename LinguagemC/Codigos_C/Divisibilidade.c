#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    int numerador, denominador;

    // Solicita ao usu�rio que insira o numerador e o denominador
    printf("Digite o numerador: ");
    scanf("%d", &numerador);
    printf("Digite o denominador: ");
    scanf("%d", &denominador);

    // Verifica se o denominador � zero
    if (denominador == 0) {
        printf("Divis�o indefinida! O denominador n�o pode ser zero.\n");
    } else {
        // Verifica se a divis�o � exata
        if (numerador % denominador == 0) {
            printf("� divis�vel!\n");
        } else {
            printf("N�o � divis�vel!\n");
        }
    }

    return 0;
}
