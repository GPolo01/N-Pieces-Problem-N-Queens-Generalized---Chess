# N-Pieces-Problem-N: Queens-Generalized---Chess

The famous 8 Queens problem, now modified to find every valid non-attacking position for different chess pieces (Pawn, Knight, Bishop, Rook, Queen, King) on an N×N board.

Below is a graph demonstrating the relationship between the number of solutions and the time required to find them on an N×N board:

Features

    Multi-Piece Support: Supports 6 types of chess pieces with distinct movement rules.

    Optimized Backtracking: Utilizes recursion with efficient tree pruning to skip invalid paths early.

    Memory-Efficient: Implements validation based on coordinate vectors (O(k) complexity) instead of full matrix verification (O(N2) complexity).

    Performance Note: To speed up execution, there is an option to disable the visual printing of boards. This focuses solely on counting solutions and performance, which is recommended for large inputs (N>10).
    
How to Compile and Run

Prerequisites

    GCC compiler

Compilation
Bash

gcc Chess.c -o chess

Execuction

./chess

The program will interactively ask for:

    Board size (N).

    Piece type (1-Pawn, 2-Rook, 3-Knight, 4-Bishop, 5-Queen, 6-King).

    Visualization mode (1 = Draw boards, 0 = Count only).

Future Work

    Develop an even broader generalization, allowing the user to choose and mix different types of pieces on the same board simultaneously.
