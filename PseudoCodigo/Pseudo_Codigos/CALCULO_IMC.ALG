Algoritmo "Calculo_IMC"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : C�lculo do �ndice de Massa Corporal (IMC)
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
    escreval("O �ndice de Massa Corporal (IMC) �: ", IMC)

Fimalgoritmo