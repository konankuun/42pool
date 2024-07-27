#include <unistd.h>
#include <stdlib.h>

#define N 4

extern int col_up[N], col_down[N], row_left[N], row_right[N];

void my_write(const char *str);

void parse_input(char *arg) {
    int input[16];
    for (int i = 0; i < 16; i++) {
        if (*arg < '1' || *arg > '4') {
            my_write("Error\n");
            exit(1);
        }
        input[i] = *arg - '0';
        arg++;
        if (i < 15 && *arg != ' ') {
            my_write("Error\n");
            exit(1);
        }
        arg++;
    }

    for (int i = 0; i < 4; i++) {
        col_up[i] = input[i];
        col_down[i] = input[i + 4];
        row_left[i] = input[i + 8];
        row_right[i] = input[i + 12];
    }
}
