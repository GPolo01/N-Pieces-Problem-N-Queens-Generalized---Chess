# N-Pieces-Problem-N: Queens-Generalized---Chess

The famous 8 Queens problem, now modified to find every valid non-attacking position for different chess pieces (Pawn, Knight, Bishop, Rook, Queen, King) on an N×N board.

Below is a graph demonstrating the relationship between the number of solutions and the time required to find them on an N×N board:

<img width="1262" height="786" alt="image" src="https://github.com/user-attachments/assets/9aeb7ce4-7eff-4a8a-9124-e07aea718fdc" />

For more details, see the tables in the end.

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

Piece       | N   | Solutions        | Time (s) 
--------------------------------------------------

Pawn       | 1   | 1               | 0.0000

Pawn       | 2   | 4               | 0.0000

Pawn       | 3   | 38              | 0.0000

Pawn       | 4   | 661             | 0.0000

Pawn       | 5   | 16286           | 0.0010

Pawn       | 6   | 527654          | 0.0230

Pawn       | 7   | 21191208        | 0.8310

Pawn       | 8   | 1015335608      | 49.1850

Pawn       | 9   | 56484795166     | 2918.7280

Rook       | 1   | 1               | 0.0000

Rook       | 2   | 2               | 0.0000

Rook       | 3   | 6               | 0.0000

Rook       | 4   | 24              | 0.0000

Rook       | 5   | 120             | 0.0000

Rook       | 6   | 720             | 0.0010

Rook       | 7   | 5040            | 0.0120

Rook       | 8   | 40320           | 0.1690

Rook       | 9   | 362880          | 2.5370

Knight     | 1   | 1               | 0.0000

Knight     | 2   | 6               | 0.0000

Knight     | 3   | 36              | 0.0000

Knight     | 4   | 412             | 0.0000

Knight     | 5   | 9386            | 0.0010

Knight     | 6   | 257318          | 0.0150

Knight     | 7   | 8891854         | 0.5530

Knight     | 8   | 379978716       | 27.0530

Knight     | 9   | 19206532478     | 1337.5710

Bishop     | 1   | 1               | 0.0000

Bishop     | 2   | 4               | 0.0000

Bishop     | 3   | 26              | 0.0000

Bishop     | 4   | 260             | 0.0000

Bishop     | 5   | 3368            | 0.0000

Bishop     | 6   | 53744           | 0.0070

Bishop     | 7   | 1022320         | 0.1400

Bishop     | 8   | 22522960        | 3.9900

Bishop     | 9   | 565532992       | 92.4710

Queen      | 1   | 1               | 0.0000

Queen      | 2   | 0               | 0.0000

Queen      | 3   | 0               | 0.0000

Queen      | 4   | 2               | 0.0000

Queen      | 5   | 10              | 0.0000

Queen      | 6   | 4               | 0.0000

Queen      | 7   | 40              | 0.0020

Queen      | 8   | 92              | 0.0200

Queen      | 9   | 352             | 0.1800

King       | 1   | 1               | 0.0000

King       | 2   | 0               | 0.0000

King       | 3   | 8               | 0.0000

King       | 4   | 79              | 0.0000

King       | 5   | 1974            | 0.0010

King       | 6   | 62266           | 0.0050

King       | 7   | 2484382         | 0.2450

King       | 8   | 119138166       | 11.4040

King       | 9   | 6655170642      | 605.2730
