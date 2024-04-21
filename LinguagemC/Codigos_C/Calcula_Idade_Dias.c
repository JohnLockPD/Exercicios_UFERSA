#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    int idade;
    long int dias_vividos; // Usando 'long int' para suportar uma grande quantidade de dias

    // Solicita ao usu�rio que insira sua idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Calcula aproximadamente quantos dias o usu�rio j� viveu
    dias_vividos = idade * 365; // Assumindo que um ano tem 365 dias

    // Exibe o resultado aproximado
    printf("Voc� aproximadamente viveu cerca de %ld dias.\n", dias_vividos);

    return 0;
}
