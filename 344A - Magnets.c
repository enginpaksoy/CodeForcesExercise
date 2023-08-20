#include <stdio.h>

int main(){
    int n, q, w;
    int counter = 1;
    scanf("%d %d", &n, &q);
    for (int i = 1; i < n; ++i) {
        scanf("%d", &w);
        if(q != w){
            q = w;
            counter++;
        }
    }
    printf("%d", counter);
}
