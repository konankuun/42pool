void my_write_char(char c);

void my_write_int(int num) {
    if (num == 0) {
        my_write_char('0');
        return;
    }
    
    char buffer[10];
    int i = 0;
    while (num > 0) {
        buffer[i++] = '0' + (num % 10);
        num /= 10;
    }
    while (i > 0) {
        my_write_char(buffer[--i]);
    }
}
