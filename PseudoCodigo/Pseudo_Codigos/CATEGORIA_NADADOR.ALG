Algoritmo "Categoria_Nadador"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Determina a categoria de um nadador com base na idade
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Idade: inteiro

Inicio
    // Solicitando a idade do nadador ao usuário
    escreval("Informe a idade do nadador:")
    leia(Idade)

    // Verificando a categoria do nadador com base na idade
    se (Idade <= 10) então
        escreval("Categoria: Infantil")
    senao
        se (Idade <= 17) então
            escreval("Categoria: Juvenil")
        senao
            escreval("Categoria: Sênior")
        fimse
    fimse

Fimalgoritmo