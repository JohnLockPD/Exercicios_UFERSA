Algoritmo "Contagem_Numeros"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Conta quantos números entre 100 e 200 foram digitados até ler o valor 0
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, ContadorNumeros: inteiro

Inicio
    // Inicializando o contador de números
    ContadorNumeros <- 0

    // Solicitando e contando os números entre 100 e 200
    repita
        escreval("Digite um número (digite 0 para encerrar):")
        leia(Numero)

        // Verificando se o número está entre 100 e 200
        se (Numero >= 100) e (Numero <= 200) e (Numero <> 0) então
            ContadorNumeros <- ContadorNumeros + 1
        fimse
    ate (Numero = 0)

    // Exibindo o resultado
    escreval("Foram digitados ", ContadorNumeros, " números entre 100 e 200.")

Fimalgoritmo