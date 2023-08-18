#include <stdio.h>
#define SIZE 100

int main() {
    int n;
    scanf("%d", &n);
    int array[SIZE] = {0};
    int p, q;
    int level;
    scanf("%d", &p);
    for (int i = 0; i < p; ++i) {
        scanf("%d", &level);
        array[level] = 1;
    }
    scanf("%d", &q);
    for (int i = 0; i < q; ++i) {
        scanf("%d", &level);
        array[level] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        if(array[i] == 0){
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}
