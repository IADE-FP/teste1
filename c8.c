#include <stdio.h>

int f(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    return f(n-1) + f(n-2);
}

int main() {
    printf("%d\n", f(3));
    return 0;
}