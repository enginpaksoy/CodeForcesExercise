#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int sumS = 0, sumD = 0, small = 0, big = n-1;
    for (int i = 0; i < n; ++i) {
        if(a[small] > a[big]){
            if(i % 2 == 0){
                sumS += a[small];
                small += 1;
            }
            else{
                sumD += a[small];
                small += 1;
            }
        }
        else{
            if(i % 2 == 0){
                sumS += a[big];
                big += -1;
            }
            else{
                sumD += a[big];
                big += -1;
            }
        }
    }
    printf("%d %d", sumS, sumD);
}
