#include <unistd.h>

void my_write_char(char c) {
    write(1, &c, 1);
}
