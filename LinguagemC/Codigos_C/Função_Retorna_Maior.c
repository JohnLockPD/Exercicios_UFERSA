#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Esta fun��o retorna o maior de dois n�meros inteiros passados como par�metro.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o que retorna o maior de dois n�meros inteiros
int maior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

// Fun��o principal para testar a fun��o maior
int main() {
    int numero1, numero2;

    // Solicita ao usu�rio que insira dois n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &numero2);

    // Chama a fun��o maior e exibe o resultado
    printf("O maior n�mero entre %d e %d �: %d\n", numero1, numero2, maior(numero1, numero2));

    return 0;
}
