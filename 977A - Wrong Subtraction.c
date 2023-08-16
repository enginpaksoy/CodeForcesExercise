#include <stdio.h>

int main()
{
    int num, subtract_tanya;
    scanf("%d %d", &num, &subtract_tanya);
    for (int i = 0; i < subtract_tanya; ++i) {
        if(num % 10 != 0){
            num = num - 1;
        }
        else if(num % 10 == 0){
            num = num / 10;
        }
        continue;
    }
    printf("%d", num);
}
