Algoritmo "Verifica_Intervalo"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Verifica se um número está no intervalo entre 100 e 200
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero: inteiro

Inicio
    // Solicitando um número ao usuário
    escreval("Digite um número:")
    leia(Numero)

    // Verificando se o número está no intervalo entre 100 e 200
    se (Numero >= 100 e Numero <= 200) então
        escreval("O número ", Numero, " está no intervalo entre 100 e 200.")
    senao
        escreval("O número ", Numero, " não está no intervalo entre 100 e 200.")
    fimse

Fimalgoritmo