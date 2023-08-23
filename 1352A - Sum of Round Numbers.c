#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int number, e = 0;
        int a[5];
        scanf("%d", &number);
            for (int j = 1; j <= number; j *= 10) {
                if(number / j % 10)
                    a[e++] = number / j % 10 * j;
            }
            printf("%d\n", e);
            for (int k = 0; k < e; ++k) {
                printf("%d ", a[k]);
            }
            puts("");
    }
}
