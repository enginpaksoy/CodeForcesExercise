#include <stdio.h>

int main() {
    int n, max = 0, min = 10000, counter = 0;

    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if(i == 0){
            max = a[0];
            min = a[0];
        }
        if(a[i] > max){
            max = a[i];
            counter++;
        }
        if(a[i] < min){
            min = a[i];
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}
