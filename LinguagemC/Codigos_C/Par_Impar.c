#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    int numero;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � par ou �mpar e mostra o resultado
    if (numero % 2 == 0) {
        printf("O n�mero %d � par.\n", numero);
    } else {
        printf("O n�mero %d � �mpar.\n", numero);
    }

    return 0;
}
