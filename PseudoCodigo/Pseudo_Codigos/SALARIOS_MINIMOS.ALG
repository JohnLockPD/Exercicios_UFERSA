Algoritmo "Salarios_Minimos"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : C�lculo de Quantos Sal�rios M�nimos um Funcion�rio Ganha
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    SalarioMinimo, SalarioFuncionario, SalariosEquivalentes: real

Inicio
    // Solicitando o valor do sal�rio m�nimo
    escreval("Informe o valor do sal�rio m�nimo:")
    leia(SalarioMinimo)

    // Solicitando o sal�rio do funcion�rio
    escreval("Informe o sal�rio do funcion�rio:")
    leia(SalarioFuncionario)

    // Calculando quantos sal�rios m�nimos o funcion�rio ganha
    SalariosEquivalentes <- SalarioFuncionario / SalarioMinimo

    // Exibindo o resultado
    escreval("O funcion�rio ganha ", SalariosEquivalentes, " sal�rios m�nimos.")

Fimalgoritmo
