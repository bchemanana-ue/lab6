#include <stdio.h>

int main(void)
{
    int h, w;
    printf("Enter h (2..10): \n");
    printf("Enter w (2..10): \n");
    if (scanf("%d %d", &h, &w) != 2) {
        printf("Input error\n");
        return 1;
    }
    if (h < 2 || h > 10 || w < 2 || w > 10) {
        printf("Range error\n");
        return 1;
    }
    for (int row = 1; row <= h; row ++) {
        for (int col = 1; col <= w; col ++) {
            if ((row == 1 || row == h) || (col == 1 || col == w)) {
                printf("%3s", "*");
            }
            else {
                printf("%3s", " ");
            }
        }
        printf("\n");
    }
    return 0;
}
