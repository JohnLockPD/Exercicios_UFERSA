Algoritmo "Calcula_Salario_Mensal"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : C�lculo do Sal�rio Mensal
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    HorasTrabalhadas, ValorPorHora, SalarioMensal: real

Inicio
    // Solicitando o n�mero de horas trabalhadas em um m�s
    escreval("Informe o n�mero de horas trabalhadas em um m�s:")
    leia(HorasTrabalhadas)

    // Solicitando o valor por hora
    escreval("Informe o valor por hora de trabalho:")
    leia(ValorPorHora)

    // Calculando o sal�rio mensal
    SalarioMensal <- HorasTrabalhadas * ValorPorHora

    // Exibindo o sal�rio mensal
    escreval("O sal�rio mensal �: ", SalarioMensal)

Fimalgoritmo