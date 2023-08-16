#include <stdio.h>
 
int main() {
    int first, money, num;
    scanf("%d %d %d", &first, &money, &num);
    int result = (num * (num+1) / 2) * first - money;
    if(result < 0){
        result = 0;
    }
    printf("%d", result);
}
