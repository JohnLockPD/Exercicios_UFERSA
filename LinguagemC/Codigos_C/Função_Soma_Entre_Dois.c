#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Esta fun��o retorna a soma dos n�meros inteiros existentes entre dois n�meros inteiros.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para calcular a soma dos n�meros inteiros existentes entre dois n�meros
int soma_entre_numeros(int num1, int num2) {
    int soma = 0;
    int menor, maior;

    // Determina qual n�mero � o menor e qual � o maior
    if (num1 < num2) {
        menor = num1;
        maior = num2;
    } else {
        menor = num2;
        maior = num1;
    }

    // Calcula a soma dos n�meros inteiros entre o menor e o maior (excluindo-os)
    for (int i = menor + 1; i < maior; i++) {
        soma += i;
    }

    return soma;
}

// Fun��o principal
int main() {
    int numero1, numero2;

    // Solicita ao usu�rio que insira dois n�meros
    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &numero2);

    // Chama a fun��o para calcular a soma dos n�meros inteiros entre os n�meros digitados
    int resultado = soma_entre_numeros(numero1, numero2);

    // Exibe o resultado na tela
    printf("A soma dos n�meros inteiros entre %d e %d �: %d\n", numero1, numero2, resultado);

    return 0;
}
