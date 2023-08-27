#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a, pol = 0, crime = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a);
        if(a == -1){
            crime++;
            if(pol > 0){
                crime--;
                pol--;
            }
        }
        else if(a >= 1){
            pol += a;
        }
    }
    printf("%d", crime);
}
