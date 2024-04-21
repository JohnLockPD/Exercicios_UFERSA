#include <stdio.h>
#include <math.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Este programa calcula as ra�zes de uma equa��o do segundo grau.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para calcular as ra�zes de uma equa��o do segundo grau
void calcular_raizes(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    double raiz1, raiz2;

    // Verifica se o delta � negativo, pois neste caso as ra�zes s�o n�meros complexos
    if (delta < 0) {
        printf("As ra�zes da equa��o s�o n�meros complexos.\n");
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        
        printf("As ra�zes da equa��o s�o: %.2f e %.2f\n", raiz1, raiz2);
    }
}

// Fun��o principal
int main() {
    double a, b, c;

    // Solicita ao usu�rio que insira os coeficientes da equa��o
    printf("Digite o coeficiente 'a': ");
    scanf("%lf", &a);

    printf("Digite o coeficiente 'b': ");
    scanf("%lf", &b);

    printf("Digite o coeficiente 'c': ");
    scanf("%lf", &c);

    // Chama a fun��o para calcular as ra�zes da equa��o
    calcular_raizes(a, b, c);

    return 0;
}
