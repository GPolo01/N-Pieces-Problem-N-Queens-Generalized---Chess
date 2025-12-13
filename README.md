# N-Pieces-Problem: N-Queens-Generalized -- Chess

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

<details>
  <summary> Click to see (Pawn)</summary>

| N | Solutions   | Time (s) |
| :---: | :---: | :---: |
| 1 |       1     | 0.0000 |
| 2 |       4     | 0.0000 |
| 3 |      38     | 0.0000 |
| 4 |      661    | 0.0000 |
| 5 |    16286    | 0.0010 |
| 6 |  527654     | 0.0230 |
| 7 |  21191208   | 0.8310 |
| 8 | 1015335608  | 49.1850 |
| 9 | 56484795166 | 2918.7280 |
</details>

<details>
  <summary> Click to see (Rook)</summary>

| N | Solutions | Time (s) |
| :---: | :---: | :---: |
| 1 | 1 | 0.0000 |
| 2 | 2 | 0.0000 |
| 3 | 6               | 0.0000 |
| 4 | 24              | 0.0000 |
| 5 | 120             | 0.0000 |
| 6 | 720             | 0.0010 |
| 7 | 5040            | 0.0120 |
| 8 | 40320           | 0.1690 |
| 9 | 362880          | 2.5370 |
</details>

<details>
  <summary> Click to see (Knight)</summary>

| N | Solutions | Time (s) |
| :---: | :---: | :---: |
| 1 | 1 | 0.0000 |
| 2 | 6               | 0.0000
| 3 | 36              | 0.0000
| 4 | 412             | 0.0000
| 5 | 9386            | 0.0010
| 6 | 257318          | 0.0150
| 7 | 8891854         | 0.5530
| 8 | 379978716       | 27.0530
| 9 | 19206532478     | 1337.5710
</details>
    
<details>
  <summary> Click to see (Bishop)</summary>

| N | Solutions | Time (s) |
| :---: | :---: | :---: |
| 1 | 1 | 0.0000 |
| 2 | 4               | 0.0000
| 3 | 26              | 0.0000
| 4 | 260             | 0.0000
| 5 | 3368            | 0.0000
| 6 | 53744           | 0.0070
| 7 | 1022320         | 0.1400
| 8 | 22522960        | 3.9900
| 9 | 565532992       | 92.4710
</details>
    
<details>
  <summary> Click to see (Queen)</summary>

| N | Solutions | Time (s) |
| :---: | :---: | :---: |
| 1 | 1 | 0.0000 |
| 2 | 0 | 0.0000
| 3 | 0 | 0.0000
| 4 | 2 | 0.0000
| 5 | 10| 0.0000
| 6 | 4 | 0.0000
| 7 | 40| 0.0020
| 8 | 92| 0.0200
| 9 | 352| 0.1800
</details>
    
<details>
  <summary> Click to see (King)</summary>

| N | Solutions | Time (s) |
| :---: | :---: | :---: |
| 1 | 1 | 0.0000 |
| 2 | 0               | 0.0000
| 3 | 8               | 0.0000
| 4 | 79              | 0.0000
| 5 | 1974            | 0.0010
| 6 | 62266           | 0.0050
| 7 | 2484382         | 0.2450
| 8 | 119138166       | 11.4040
| 9 | 6655170642      | 605.2730
</details>



