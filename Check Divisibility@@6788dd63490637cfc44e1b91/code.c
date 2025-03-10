#include<stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    x%5==0 ? printf("Divisible\n") : printf("Not Divisible\n");
    x%11==0 ? printf("Divisible\n") : printf("Not Divisible\n");
// if (x%5==0 && x%11==0) {
//         printf("Divisible");
//     }
// else {
//         printf("Not Divisible");
//     }

    return 0;
}