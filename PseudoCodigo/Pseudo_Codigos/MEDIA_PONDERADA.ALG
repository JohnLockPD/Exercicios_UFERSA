Algoritmo "Media_Ponderada"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : C�lculo da M�dia Ponderada de Tr�s Notas
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Nota1, Nota2, Nota3, Peso1, Peso2, Peso3, Media: real

Inicio
    escreval("Informe a primeira nota:")
    leia(Nota1)
    escreval("Informe o peso da primeira nota:")
    leia(Peso1)

    escreval("Informe a segunda nota:")
    leia(Nota2)
    escreval("Informe o peso da segunda nota:")
    leia(Peso2)

    escreval("Informe a terceira nota:")
    leia(Nota3)
    escreval("Informe o peso da terceira nota:")
    leia(Peso3)

    Media <- (Nota1 * Peso1 + Nota2 * Peso2 + Nota3 * Peso3) / (Peso1 + Peso2 + Peso3)

    escreval("A m�dia ponderada �: ", Media)

Fimalgoritmo
