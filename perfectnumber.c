#include <stdio.h>

int isPerfect(int num) {
    int sum = 1;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (sum == num);
}

int main() {
    printf("Three-digit perfect numbers:\n");

    for (int i = 100; i <= 999; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}