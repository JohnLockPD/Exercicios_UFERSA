#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Esta fun��o l� cinco valores inteiros e imprime o maior e o menor valor.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para encontrar o maior e o menor valor entre cinco n�meros inteiros
void encontrar_maior_menor(int valores[]) {
    int maior = valores[0];
    int menor = valores[0];

    // Loop para encontrar o maior e o menor valor
    for (int i = 1; i < 5; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }

    // Imprime o maior e o menor valor
    printf("O maior valor �: %d\n", maior);
    printf("O menor valor �: %d\n", menor);
}

// Fun��o principal
int main() {
    int valores[5];

    // Solicita ao usu�rio que insira cinco valores inteiros
    printf("Digite cinco valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
    }

    // Chama a fun��o para encontrar o maior e o menor valor
    encontrar_maior_menor(valores);

    return 0;
}
