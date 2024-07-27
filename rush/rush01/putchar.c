#include <unistd.h>

void my_write(const char *str) {
    while (*str) {
        write(1, str++, 1);
    }
}
