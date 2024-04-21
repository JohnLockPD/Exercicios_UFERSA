Algoritmo "Calcula_Salario_Mensal"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Cálculo do Salário Mensal
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    HorasTrabalhadas, ValorPorHora, SalarioMensal: real

Inicio
    // Solicitando o número de horas trabalhadas em um mês
    escreval("Informe o número de horas trabalhadas em um mês:")
    leia(HorasTrabalhadas)

    // Solicitando o valor por hora
    escreval("Informe o valor por hora de trabalho:")
    leia(ValorPorHora)

    // Calculando o salário mensal
    SalarioMensal <- HorasTrabalhadas * ValorPorHora

    // Exibindo o salário mensal
    escreval("O salário mensal é: ", SalarioMensal)

Fimalgoritmo