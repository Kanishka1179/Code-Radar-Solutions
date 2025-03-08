#include <stdio.h>

int main() {
    int x, y, z;
    
    // Taking input for three sides of the triangle
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    // Checking triangle type
    if (x == y && y == z) {
        printf("Equilateral\n");
    } 
    else if (x == y || y == z || x == z) {  // Fix for isosceles condition
        printf("Isosceles\n");
    } 
    else {
        printf("Scalene\n");
    }

    // Corrected printing of numbers with three spaces
    printf("%d   %d   %d\n", x, y, z);

    return 0;
}
