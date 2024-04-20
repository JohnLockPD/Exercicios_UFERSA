Algoritmo "Salarios_Minimos"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Cálculo de Quantos Salários Mínimos um Funcionário Ganha
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    SalarioMinimo, SalarioFuncionario, SalariosEquivalentes: real

Inicio
    // Solicitando o valor do salário mínimo
    escreval("Informe o valor do salário mínimo:")
    leia(SalarioMinimo)

    // Solicitando o salário do funcionário
    escreval("Informe o salário do funcionário:")
    leia(SalarioFuncionario)

    // Calculando quantos salários mínimos o funcionário ganha
    SalariosEquivalentes <- SalarioFuncionario / SalarioMinimo

    // Exibindo o resultado
    escreval("O funcionário ganha ", SalariosEquivalentes, " salários mínimos.")

Fimalgoritmo
