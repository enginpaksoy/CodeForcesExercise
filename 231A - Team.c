#include <stdio.h>

int main() {
    int x;
    int sum = 0;
    scanf("%d", &x);
    for (int i = 0; i < x; ++i) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if((a == 1 && b == 1) || (b == 1 && c == 1) || (a == 1 && c == 1)){
            sum += 1;
        }
    }
    printf("%d", sum);
    return 0;
}
