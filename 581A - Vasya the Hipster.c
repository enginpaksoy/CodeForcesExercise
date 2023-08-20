#include <stdio.h>

int main() {
    int a, b, x, y;
    scanf("%d %d", &a, &b);
    if(a > b)
        x = b;
    else
        x = a;
    y = (a + b - 2*x) / 2;
    printf("%d %d", x, y);
} 
