Algoritmo "Categoria_Nadador"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Determina a categoria de um nadador com base na idade
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Idade: inteiro

Inicio
    // Solicitando a idade do nadador ao usu�rio
    escreval("Informe a idade do nadador:")
    leia(Idade)

    // Verificando a categoria do nadador com base na idade
    se (Idade <= 10) ent�o
        escreval("Categoria: Infantil")
    senao
        se (Idade <= 17) ent�o
            escreval("Categoria: Juvenil")
        senao
            escreval("Categoria: S�nior")
        fimse
    fimse

Fimalgoritmo