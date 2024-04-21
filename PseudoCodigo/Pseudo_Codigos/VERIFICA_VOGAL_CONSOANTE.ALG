Algoritmo "Verifica_Vogal_Consoante"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Verifica se uma letra digitada é vogal ou consoante
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Letra: caractere

Inicio
    // Solicitando uma letra ao usuário
    escreval("Digite uma letra:")
    leia(Letra)

    // Verificando se a letra é uma vogal
    se (Letra = "a" ou Letra = "e" ou Letra = "i" ou Letra = "o" ou Letra = "u" or
        Letra = "A" ou Letra = "E" ou Letra = "I" ou Letra = "O" ou Letra = "U") então
        escreval("A letra digitada é uma vogal.")
    senao
        escreval("A letra digitada é uma consoante.")
    fimse

Fimalgoritmo