#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int x, y, k;
    int counter = 0;
    for (int i = 0; i < t; ++i) {
        scanf("%d %d %d", &x, &y, &k);
        for (int j = 1; j < x; ++j) {
            counter += y;
        }
        x = 1;
        for (int j = 1; j < y; ++j) {
            counter += x;
        }
        y = 1;
        (k == counter) ? printf("YES\n") : printf("NO\n");
        counter = 0;
    }
}
