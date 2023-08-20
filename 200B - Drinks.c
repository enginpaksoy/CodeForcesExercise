#include <stdio.h>

int main(){
    int n, percent;
    scanf("%d", &n);
    int total = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &percent);
        total += percent;
    }
    printf("%f", (double) total / n);
}
