#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter table size (1..10): \n");
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }
    if (n < 1 || n > 10) {
        printf("Range error\n");
        return 1;
    }
    for (int row = 1; row <= n; row ++) {
        for (int col = 1; col <= n; col ++) {
            printf("%4d", row*col);
        }
        printf("\n");
    }
    return 0;
}