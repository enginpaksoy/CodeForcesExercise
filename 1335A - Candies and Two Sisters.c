#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    int result;
    for (int i = 0; i < t; ++i){
        scanf("%d", &n);
        if(n < 2){
            result = 0;
        }
        else if(n % 2 == 1){
            result = n / 2;
        }
        else if(n % 2 == 0){
            result = n / 2 - 1;
        }
        printf("%d\n", result);
    }
}
