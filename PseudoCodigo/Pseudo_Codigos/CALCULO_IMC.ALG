Algoritmo "Calculo_IMC"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Cálculo do Índice de Massa Corporal (IMC)
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Altura, Peso, IMC: real

Inicio
    // Solicitando a altura da pessoa
    escreval("Informe a altura da pessoa (em metros):")
    leia(Altura)

    // Solicitando o peso da pessoa
    escreval("Informe o peso da pessoa (em quilogramas):")
    leia(Peso)

    // Calculando o IMC
    IMC <- Peso / (Altura * Altura)

    // Exibindo o IMC
    escreval("O Índice de Massa Corporal (IMC) é: ", IMC)

Fimalgoritmo