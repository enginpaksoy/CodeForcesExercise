#include <stdio.h>
#include <math.h>

int main() {
    int t, a, b;
    scanf("%d", &t);
    while (t--){
        scanf("%d %d", &a, &b);
        printf("%d\n", (abs(a-b)+9)/10);
    }
}
