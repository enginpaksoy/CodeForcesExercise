#include <stdio.h>

int main()
{
    int dist;
    scanf("%d", &dist);
    if(dist % 5 == 0){
        printf("%d",dist / 5);
    } else{
        printf("%d", dist / 5 + 1);
    }
    return 0;
}
