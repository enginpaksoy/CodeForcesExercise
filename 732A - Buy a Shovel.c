#include <stdio.h>

int main() {
    int k, r;
    scanf("%d %d", &k, &r);
    for (int i = 1; i <= 1000; ++i) {
        if((k * i) % 10 == r || (k * i) % 10 == 0){
            printf("%d ", i);
            break;
        }
    }
}
