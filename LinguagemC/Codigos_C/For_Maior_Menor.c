#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

int main() {
    int idade;

    // Loop para repetir o procedimento 10 vezes
    for (int i = 0; i < 10; i++) {
        // Solicita e l� a idade do usu�rio
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        // Verifica se a idade � maior ou igual a 18
        if (idade >= 18) {
            printf("Voc� � maior de idade.\n");
        } else {
            printf("Voc� � menor de idade.\n");
        }
    }

    return 0;
}
