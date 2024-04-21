#include <stdio.h>
#include <math.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Este programa calcula as raízes de uma equação do segundo grau.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função para calcular as raízes de uma equação do segundo grau
void calcular_raizes(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    double raiz1, raiz2;

    // Verifica se o delta é negativo, pois neste caso as raízes são números complexos
    if (delta < 0) {
        printf("As raízes da equação são números complexos.\n");
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        
        printf("As raízes da equação são: %.2f e %.2f\n", raiz1, raiz2);
    }
}

// Função principal
int main() {
    double a, b, c;

    // Solicita ao usuário que insira os coeficientes da equação
    printf("Digite o coeficiente 'a': ");
    scanf("%lf", &a);

    printf("Digite o coeficiente 'b': ");
    scanf("%lf", &b);

    printf("Digite o coeficiente 'c': ");
    scanf("%lf", &c);

    // Chama a função para calcular as raízes da equação
    calcular_raizes(a, b, c);

    return 0;
}
