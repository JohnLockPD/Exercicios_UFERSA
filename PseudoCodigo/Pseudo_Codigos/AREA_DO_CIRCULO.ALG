Algoritmo "Area_do_Circulo"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Cálculo da Área de um Círculo
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Raio, Area: real
    Pi: real

Inicio
    // Definindo o valor de Pi
    Pi <- 3.14159

    // Solicitando o raio do círculo
    escreval("Informe o raio do círculo:")
    leia(Raio)

    // Calculando a área do círculo
    Area <- Pi * Raio * Raio

    // Exibindo a área do círculo
    escreval("A área do círculo é: ", Area)

Fimalgoritmo