#include <stdio.h>

int main() {
    int n, k, num, counter = 0;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);
        if(5 - num >= k){
            counter += 1;
        }
    }
    printf("%d", counter / 3);
}
