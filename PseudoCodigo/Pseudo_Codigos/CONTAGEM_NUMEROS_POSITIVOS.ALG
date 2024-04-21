Algoritmo "Contagem_Numeros_Positivos"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Conta quantos números inteiros positivos foram digitados
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Contador: inteiro

Inicio
    // Inicializando o contador de números
    Contador <- 0

    // Solicitando e contando os números inteiros positivos
    repita
        escreval("Digite um número inteiro positivo (ou digite 0 para sair):")
        leia(Numero)

        // Verificando se o número é positivo e diferente de zero
        se (Numero > 0) então
            Contador <- Contador + 1
        fimse
    ate (Numero = 0)

    // Exibindo o resultado
    escreval("Foram digitados ", Contador, " números inteiros positivos.")

Fimalgoritmo