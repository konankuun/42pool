#include <unistd.h>
#include <stdlib.h>

#define N 4

int col_up[N], col_down[N], row_left[N], row_right[N];
int board[N][N];

void my_write(const char *str);
void my_write_char(char c);
void my_write_int(int num);
int solve(int row);
void parse_input(char *arg);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        my_write("Error\n");
        return 1;
    }

    parse_input(argv[1]);

    if (solve(0)) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                my_write_int(board[i][j]);
                if (j < N - 1) my_write(" ");
            }
            my_write("\n");
        }
    } else {
        my_write("Error\n");
    }

    return 0;
}
