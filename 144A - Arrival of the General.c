#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int place_max = 0, place_min = n, max = 0, min = 100;
    for (int i = 0; i < n; ++i) {
        if(a[i] > max) {
            max = a[i];
            place_max = i;
        }
        if(a[i] <= min){
            min = a[i];
            place_min = i;
        }
    }
    if(place_max > place_min)
        printf("%d", place_max + n - 1 - place_min - 1);
    if(place_min > place_max)
        printf("%d", place_max + n - 1 - place_min);
}
