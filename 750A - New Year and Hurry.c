#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int question_counter = 0;
    for (int i = 1; i <= n; ++i) {
        question_counter += i;
        int time = question_counter * 5 + k;
        if(time > 240) {
            i = i-1;
            printf("%d", i);
            return 0;
        }
    }
    printf("%d", n);
}
