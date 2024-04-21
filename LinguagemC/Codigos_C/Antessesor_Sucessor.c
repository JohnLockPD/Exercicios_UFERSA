#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    int numero, antecessor, sucessor;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Calcula o antecessor e o sucessor do n�mero inserido
    antecessor = numero - 1;
    sucessor = numero + 1;

    // Apresenta o antecessor e o sucessor do n�mero inserido
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}
