#include <stdio.h>

int main() {
    int n, h;
    scanf("%d%d", &n, &h);
    int friends[n];
    int width_road = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &friends[i]);
        if(friends[i] > h){
            width_road += 2;
        }
        else{
            width_road++;
        }
    }
    printf("%d", width_road);
}
