#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

//row and column
struct position{
    int r; 
    int c;
};

char get_piece_letter(int type) {
    switch (type) {
        case 1: return 'P';
        case 2: return 'R';
        case 3: return 'N';
        case 4: return 'B';
        case 5: return 'Q';
        case 6: return 'K';
        default: return '?';
    }
}

void print_board(int n, int **board, long long *solution_count,
    int type) {
    printf("Solution found %lld:\n", *solution_count);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] != 0)
                printf("%c ", get_piece_letter(type));
            else
                printf(". ");
        }
        printf("\n");
    }
}

bool is_safe(int row, int col, int placed_count, struct position *occupied, int piece_type) {
    for (int i = 0; i < placed_count; i++) {
        int old_r = occupied[i].r;
        int old_c = occupied[i].c;

        if (piece_type == 1) {
            if (abs(row - old_r) == 1 && abs(col - old_c) == 1)
                return false;
        }

        if (piece_type == 2) {
            if (row == old_r || col == old_c) 
                return false;
        }

        if (piece_type == 3) {
            if ((abs(row - old_r) == 2 && abs(col - old_c) == 1) || 
                    (abs(row - old_r) == 1 && abs(col - old_c) == 2)) {
                return false;
            }
        }

        if (piece_type == 4) {
            if (abs(row - old_r) == abs(col - old_c)) 
                return false;
        }

        if (piece_type == 5) {
            if (row == old_r || col == old_c) return false;
            if (abs(row - old_r) == abs(col - old_c)) return false;
        }

        if (piece_type == 6) {
            if (abs(row - old_r) <= 1 && abs(col - old_c) <= 1)
                return false;
        }
    }
    return true;
}

void backtrack(int n, int pieces_remaining, int start_index, int **board,
    int piece_type, long long *solution_count, struct position *occupied, int k, int print) {
    // Base case
    if (pieces_remaining == 0) {
        (*solution_count)++;
        if (print)   
            print_board(n, board, solution_count, piece_type);
        return;
    }

    // Iterate over all possible cells starting from start_index
    for (int i = start_index; i < n * n; i++) {
        // Convert index to board coordinates
        int row = i / n; 
        int col = i % n;

        // Check safety based on piece
        if (is_safe(row, col, k, occupied, piece_type)) {
            // 1: Place piece on board
            board[row][col] = 1;

            // 2: Save position (for now)
            occupied[k].r = row;
            occupied[k].c = col;

            // 3: the backtracking, place next piece
            backtrack(n, pieces_remaining - 1, i + 1, board, piece_type,
                solution_count, occupied, k + 1, print);

            // 4: Undo move, remove piece
            board[row][col] = 0;
        }
    }
}

int main() {
    int N, piece_type, scanf_result, print;
    long long valid_solutions;

    // N -> The dimension for the board and number of pieces
    N = piece_type = 0;
    valid_solutions = 0;

    do {
        printf("Enter board size (N x N), which is also the number of pieces: \n");
        scanf_result = scanf("%d", &N);

        if (scanf_result != 1 || N < 1) {
            printf("Please enter a positive value.\n");
            while (getchar() != '\n');
            N = 0;
        }
    } while ( N <= 0);

    // Which piece will be used on the board?
    do {
        printf("\nEnter the piece type: \n");
        printf("1 - Pawn, 2 - Rook, 3 - Knight, 4 - Bishop, 5 - Queen, 6 - King.\n");
        printf("Your choice: ");
        scanf_result = scanf("%d", &piece_type);

        if (scanf_result != 1 || piece_type < 1 || piece_type > 6) {
            printf(" Please enter a positive value and less than 7.\n");
            while (getchar() != '\n');
            piece_type = 0;
        }
    } while (piece_type < 1 || piece_type > 6);

    do {
        printf("Would you like to visualize the boards with the solutions? 1 - Yes, "
            "0 - No, just count.\n");
        scanf("%d", &print);
    } while (print != 1 && print != 0);

    //Start timer
    clock_t begin = clock();
    
    // --- Dynamic Allocation ---
    // The board
    int **board = (int **)malloc(N * sizeof(int *));
    // Calloc initializes with 0
    for (int i = 0; i < N; i++) {
        board[i] = (int *)calloc(N, sizeof(int));
    }

    // The array of occupied positions
    struct position *occupied = (struct position *) malloc(N * sizeof(struct position));
    if (occupied == NULL) {
        printf("Allocation error!\n");
        return 1;
    }

    // Call backtracking
    backtrack(N, N, 0, board, piece_type, &valid_solutions, occupied, 0, print);

    // Calculate the time
    clock_t end = clock();
    double duration = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nTotal valid positions for this piece type on a %dx%d board: %lld\n", N, N, valid_solutions);
    printf("Execution time: %.3f seconds\n", duration);

    // --- Free the allocated memory ---
    for (int i = 0; i < N; i++) {
        free(board[i]);
    }
    free(board);
    free(occupied);

    return 0;
}