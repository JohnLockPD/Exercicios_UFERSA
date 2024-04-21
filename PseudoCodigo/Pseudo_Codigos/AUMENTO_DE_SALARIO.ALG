Algoritmo "Aumento_de_Salario"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Cálculo do Novo Salário com Aumento de 15%
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    SalarioAntigo, SalarioNovo: real
    Aumento: real

Inicio
    // Solicitando o salário atual do funcionário
    escreval("Informe o salário atual do funcionário:")
    leia(SalarioAntigo)

    // Calculando o aumento de 15%
    Aumento <- SalarioAntigo * 0.15

    // Calculando o novo salário
    SalarioNovo <- SalarioAntigo + Aumento

    // Exibindo o novo salário
    escreval("O novo salário do funcionário é: ", SalarioNovo)

Fimalgoritmo