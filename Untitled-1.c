#include <stdio.h>
#include <stdlib.h>
// #include <algorithm>

#define N 100010

int a[N];

inline int read() {
    int x = 0, f = 1;
    char ch = getchar();

    while(ch < '0' || ch > '9') {
        if(ch == '-') f = -1;
        ch = getchar();
    }
    while(ch >= '0' && ch <= '9') {
        x = (x << 2) + (x << 1) + (ch ^ 48);
        ch = getchar();
    }

    return f * x;
}

inline void write(int x) {
    if(x < 0) {
        putchar('-');
        x = -x;
    }
    if(x > 9) write(x / 10);
    putchar(x % 10 + '0');
}

inline void writeln(int x) {
    write(x);
    putchar('\n');
}

inline void sdfsort(int *begin, int *end) {
    if(begin >= end) return;

    int *i = begin, *j = end - 1;
    int pivot = *(begin + (end - begin) / 2);

    while(i <= j) {
        while(*i < pivot) ++i;
        while(*j > pivot) --j;

        if(i <= j) {
            int temp = *i;
            *i = *j;
            *j = temp;
            ++i;
            --j;
        }
    }

    sdfsort(begin, j + 1);
    sdfsort(i, end);
}

int main() {

    int n = read();

    for(int i = 1; i <= n; ++i) {
        a[i] = read();
    }

    // sort(a + 1, a + n + 1);
    sdfsort(a + 1, a + n + 1);


    for(int i = 1; i <= n; ++i) {
        writeln(a[i]);
    }


    return 0;
}