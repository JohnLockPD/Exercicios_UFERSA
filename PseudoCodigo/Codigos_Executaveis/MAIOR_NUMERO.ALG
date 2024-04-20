Algoritmo "Maior_Numero"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Verifica qual número é o maior entre dois valores inteiros diferentes
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero1, Numero2: inteiro

Inicio
    // Solicitando dois valores inteiros diferentes
    repita
        escreval("Digite o primeiro número inteiro:")
        leia(Numero1)
        escreval("Digite o segundo número inteiro:")
        leia(Numero2)

        // Verificando se os números são iguais
        se (Numero1 = Numero2) então
            escreval("Os números digitados são iguais. Por favor, digite dois números diferentes.")
        fimse
    ate (Numero1 <> Numero2)

    // Verificando qual número é maior
    se (Numero1 > Numero2) então
        escreval("O maior número é: ", Numero1)
    senao
        escreval("O maior número é: ", Numero2)
    fimse

Fimalgoritmo