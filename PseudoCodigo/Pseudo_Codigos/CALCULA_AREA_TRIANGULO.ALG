Algoritmo "Calcula_Area_Triangulo"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Calcula a �rea de um tri�ngulo com medidas v�lidas
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Base, Altura, Area: real

Inicio
    // Solicitando a base do tri�ngulo at� que uma medida v�lida seja fornecida
    repita
        escreval("Digite a medida da base do tri�ngulo:")
        leia(Base)
    ate (Base >= 0)

    // Solicitando a altura do tri�ngulo at� que uma medida v�lida seja fornecida
    repita
        escreval("Digite a medida da altura do tri�ngulo:")
        leia(Altura)
    ate (Altura >= 0)

    // Calculando a �rea do tri�ngulo
    Area <- (Base * Altura) / 2

    // Exibindo o resultado
    escreval("A �rea do tri�ngulo �: ", Area)

Fimalgoritmo