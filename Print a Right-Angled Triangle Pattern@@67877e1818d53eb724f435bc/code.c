#include<stdio.h>
int main() {
    int n;
     if (n <= 0) {
        return 0;  // Exit if invalid input
    }
    scanf("%d", &n);
       for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
            printf("* ");
            }
        printf("\n");
       }


       return 0;

}