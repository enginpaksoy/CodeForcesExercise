#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int value;
    int array_number[n+1];
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &value);
        array_number[value] = i;
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d ", array_number[i]);
    }
}
