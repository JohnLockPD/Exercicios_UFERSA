Algoritmo "Tabuadas"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Imprime todas as tabuadas do 1 ao 10
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Multiplicador, Resultado: inteiro

Inicio
    // Loop externo para percorrer os números de 1 a 10
    para Numero de 1 ate 10 faca
        escreval("Tabuada do ", Numero, ":")

        // Loop interno para calcular e imprimir a tabuada do número atual
        para Multiplicador de 1 ate 10 faca
            Resultado <- Numero * Multiplicador
            escreval(Numero, " x ", Multiplicador, " = ", Resultado)
        fimpara

        // Imprime uma linha em branco entre as tabuadas
        escreval()
    fimpara

Fimalgoritmo