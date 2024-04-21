#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Este programa verifica se o n�mero digitado pelo usu�rio � um pal�ndromo.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para verificar se o n�mero � pal�ndromo
int verificar_palindromo(int numero) {
    int original = numero;
    int reverso = 0;

    // Inverte o n�mero
    while (numero != 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero = numero / 10;
    }

    // Verifica se o n�mero original � igual ao n�mero invertido
    if (original == reverso) {
        return 1; // � pal�ndromo
    } else {
        return 0; // N�o � pal�ndromo
    }
}

// Fun��o principal
int main() {
    int numero;

    // Solicita ao usu�rio que insira o n�mero
    printf("Digite um n�mero de 4 d�gitos para verificar se � um pal�ndromo: ");
    scanf("%d", &numero);

    // Verifica se o n�mero possui 4 d�gitos
    if (numero < 1000 || numero > 9999) {
        printf("O n�mero digitado n�o possui 4 d�gitos.\n");
        return 0;
    }

    // Chama a fun��o para verificar se o n�mero � pal�ndromo
    if (verificar_palindromo(numero)) {
        printf("O n�mero %d � um pal�ndromo.\n", numero);
    } else {
        printf("O n�mero %d n�o � um pal�ndromo.\n", numero);
    }

    return 0;
}
