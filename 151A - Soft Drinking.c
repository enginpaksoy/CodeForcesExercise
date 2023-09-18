#include <stdio.h>

int min(int x, int y, int z){
    return (x > y) ? ((y > z) ? z : y) : ((x > z) ? z : x);
}

int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int a = ((k * l) / nl) / n;
    int b = (p / np) / n;
    int m = (c * d) / n;
    printf("%d", min(a, b, m));
}
