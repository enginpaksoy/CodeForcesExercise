#include <stdio.h>

int main(){
    int n, counter = 0;
    int color_home, color_guest;
    scanf("%d", &n);
    int array1[n]; int array2[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &color_home, &color_guest);
        array1[i] = color_home;
        array2[i] = color_guest;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(array1[i] == array2[j]){
                counter++;
            }
        }
    }
    printf("%d", counter);
}
