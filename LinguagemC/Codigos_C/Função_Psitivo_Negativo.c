#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Esta fun��o retorna 1 se o n�mero for positivo, 0 se for nulo e -1 se for negativo.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para verificar o sinal de um n�mero
int verificar_sinal(int numero) {
    if (numero > 0) {
        return 1; // n�mero positivo
    } else if (numero == 0) {
        return 0; // n�mero nulo
    } else {
        return -1; // n�mero negativo
    }
}

// Fun��o principal
int main() {
    int numero;

    // Solicita ao usu�rio que insira um n�mero
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    // Chama a fun��o para verificar o sinal do n�mero e exibe o resultado
    int resultado = verificar_sinal(numero);
    printf("O n�mero %d � %s\n", numero, resultado == 1 ? "positivo" : (resultado == 0 ? "nulo" : "negativo"));

    return 0;
}
