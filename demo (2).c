#include <stdio.h>

int main(void) {
 int n;
 printf("Enter n (1..100): ");
 if (scanf("%d", &n) != 1)
 {
     printf("Input error\n");
     return 1;
 }
 if (n < 1 || n > 100)
 {
     printf("Range error\n");
     return 1;
 }
 long long sum = 0;
 for (int i = 1; i <= n; i++)
 {
     if (i%2 != 0)
     {
         continue;
     }
     sum += i;
 }
 printf("Even sum = %lld\n", sum);
 return 0;
}