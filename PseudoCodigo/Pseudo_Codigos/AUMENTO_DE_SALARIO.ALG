Algoritmo "Aumento_de_Salario"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : C�lculo do Novo Sal�rio com Aumento de 15%
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    SalarioAntigo, SalarioNovo: real
    Aumento: real

Inicio
    // Solicitando o sal�rio atual do funcion�rio
    escreval("Informe o sal�rio atual do funcion�rio:")
    leia(SalarioAntigo)

    // Calculando o aumento de 15%
    Aumento <- SalarioAntigo * 0.15

    // Calculando o novo sal�rio
    SalarioNovo <- SalarioAntigo + Aumento

    // Exibindo o novo sal�rio
    escreval("O novo sal�rio do funcion�rio �: ", SalarioNovo)

Fimalgoritmo