#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    int codigo;

    // Solicita ao usu�rio que insira o c�digo do produto
    printf("Digite o c�digo do produto: ");
    scanf("%d", &codigo);

    // Verifica o c�digo e mostra a classifica��o correspondente
    if (codigo == 1) {
        printf("Classifica��o: Alimento n�o-perec�vel\n");
    } else if (codigo >= 2 && codigo <= 4) {
        printf("Classifica��o: Alimento perec�vel\n");
    } else if (codigo == 5 || codigo == 6) {
        printf("Classifica��o: Vestu�rio\n");
    } else if (codigo == 7) {
        printf("Classifica��o: Higiene pessoal\n");
    } else if (codigo >= 8 && codigo <= 10) {
        printf("Classifica��o: Utens�lios dom�sticos\n");
    } else {
        printf("Classifica��o: Inv�lido\n");
    }

    return 0;
}
