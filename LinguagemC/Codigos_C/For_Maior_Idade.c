#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    int idade, contador_maiores = 0;

    // Loop para receber a idade de 10 pessoas
    for (int i = 1; i <= 10; i++) {
        // Solicita ao usu�rio que insira a idade
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        // Verifica se a idade � maior que 18 anos
        if (idade > 18) {
            contador_maiores++;
        }
    }

    // Mostra a quantidade de pessoas maiores que 18 anos
    printf("Quantidade de pessoas maiores que 18 anos: %d\n", contador_maiores);

    return 0;
}
