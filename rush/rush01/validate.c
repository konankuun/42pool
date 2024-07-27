#define N 4

extern int col_up[N], col_down[N], row_left[N], row_right[N];
extern int board[N][N];

int is_valid() {
    int i, j, max, count;
    
    // Check columns from top to bottom
    for (i = 0; i < N; i++) {
        max = 0;
        count = 0;
        for (j = 0; j < N; j++) {
            if (board[j][i] > max) {
                max = board[j][i];
                count++;
            }
        }
        if (count != col_up[i]) return 0;
    }

    // Check columns from bottom to top
    for (i = 0; i < N; i++) {
        max = 0;
        count = 0;
        for (j = N - 1; j >= 0; j--) {
            if (board[j][i] > max) {
                max = board[j][i];
                count++;
            }
        }
        if (count != col_down[i]) return 0;
    }

    // Check rows from left to right
    for (i = 0; i < N; i++) {
        max = 0;
        count = 0;
        for (j = 0; j < N; j++) {
            if (board[i][j] > max) {
                max = board[i][j];
                count++;
            }
        }
        if (count != row_left[i]) return 0;
    }

    // Check rows from right to left
    for (i = 0; i < N; i++) {
        max = 0;
        count = 0;
        for (j = N - 1; j >= 0; j--) {
            if (board[i][j] > max) {
                max = board[i][j];
                count++;
            }
        }
        if (count != row_right[i]) return 0;
    }

    return 1;
}
