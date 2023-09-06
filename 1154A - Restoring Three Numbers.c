#include <stdio.h>

int main() {
    int a[4], m = 0;
    for (int i = 0; i < 4; ++i) {
        scanf("%d", &a[i]);
        if(a[i] > m){
            m = a[i];
        }
    }
    for (int i = 0; i < 4; ++i) {
        if(a[i] != m)
            printf("%d ", (m-a[i]));
    }
}
