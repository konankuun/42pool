#include <unistd.h>

#define N 4

extern int board[N][N];
extern int col_up[N], col_down[N], row_left[N], row_right[N];

int is_valid();
int next_permutation(int *begin, int *end);

int solve(int row) {
    if (row == N) {
        if (is_valid()) {
            return 1;
        }
        return 0;
    }

    int perm[N] = {1, 2, 3, 4};
    do {
        for (int i = 0; i < N; i++) {
            board[row][i] = perm[i];
        }

        if (solve(row + 1)) {
            return 1;
        }
    } while (next_permutation(perm, perm + N));

    return 0;
}
