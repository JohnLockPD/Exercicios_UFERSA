Algoritmo "Verifica_Vogal_Consoante"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Verifica se uma letra digitada � vogal ou consoante
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Letra: caractere

Inicio
    // Solicitando uma letra ao usu�rio
    escreval("Digite uma letra:")
    leia(Letra)

    // Verificando se a letra � uma vogal
    se (Letra = "a" ou Letra = "e" ou Letra = "i" ou Letra = "o" ou Letra = "u" or
        Letra = "A" ou Letra = "E" ou Letra = "I" ou Letra = "O" ou Letra = "U") ent�o
        escreval("A letra digitada � uma vogal.")
    senao
        escreval("A letra digitada � uma consoante.")
    fimse

Fimalgoritmo