# N-Pieces-Problem-N: Queens-Generalized---Chess

The famous problem of 8 Queens now modified to find each valid position for each piece (Paw, Knight, Bishop, Rock, Queen, King).

Funcionalidades

    Multipeças: Suporte para 6 tipos de peças com regras de movimento distintas.

    Backtracking Otimizado: Utiliza recursão com poda de árvore eficiente.

    Memory-Efficient: Implementa validação baseada em vetor de coordenadas (complexidade O(k)) em vez de verificação matricial completa (complexidade O(N2)).

    Observação para ser mais rápido há a opção para desativar a impressão visual dos tabuleiros, focando apenas na contagem e performance para inputs grandes (N > 10).

Como Compilar e Rodar
Pré-requisitos

    Compilador GCC

Compilação
Bash
gcc Xadrez.c -o xadrez

Execução

O programa solicitará interativamente:

    Tamanho do tabuleiro (N).

    Tipo da peça (1-Peão, 2-Torre, 3-Cavalo, 4-Bispo, 5-Rainha, 6-Rei).

    Modo de visualização (1=Desenhar tabuleiros, 0=Apenas contagem).

Bash

./xadrez
