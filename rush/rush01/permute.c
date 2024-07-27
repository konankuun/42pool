void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int *begin, int *end) {
    int temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *--end;
        *end = temp;
    }
}

int next_permutation(int *begin, int *end) {
    if (begin == end) return 0;
    int *i = end;
    if (begin == --i) return 0;

    while (1) {
        int *i1, *i2;

        i1 = i;
        if (*--i < *i1) {
            i2 = end;
            while (!(*i < *--i2));
            swap(i, i2);
            reverse(i1, end);
            return 1;
        }
        if (i == begin) {
            reverse(begin, end);
            return 0;
        }
    }
}
