#include<stdio.h>
int main() {
int x;
scanf("%d", &x);

int y;
scanf("%d", &y);

int z;
scanf("%d", &z);

if (x==y && x==z) {
    printf("Equilateral");
}
if (x==y && x!=z) {
    printf("Isosceles");}

else {
    printf("Scalene");
}
printf("%d   %d   %d\n", x,y,z);

    return 0;
}