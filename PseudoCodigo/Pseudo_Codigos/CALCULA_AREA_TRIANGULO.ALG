Algoritmo "Calcula_Area_Triangulo"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Calcula a área de um triângulo com medidas válidas
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Base, Altura, Area: real

Inicio
    // Solicitando a base do triângulo até que uma medida válida seja fornecida
    repita
        escreval("Digite a medida da base do triângulo:")
        leia(Base)
    ate (Base >= 0)

    // Solicitando a altura do triângulo até que uma medida válida seja fornecida
    repita
        escreval("Digite a medida da altura do triângulo:")
        leia(Altura)
    ate (Altura >= 0)

    // Calculando a área do triângulo
    Area <- (Base * Altura) / 2

    // Exibindo o resultado
    escreval("A área do triângulo é: ", Area)

Fimalgoritmo