#include <stdio.h>

int main() {
    long long int num;
    scanf("%lld", &num);
    int counter = 0;
    while(num != 0){
        if(num % 10 == 4 || num % 10 == 7){
            counter++;
        }
        num /= 10;
    }
    if (counter == 4 || counter == 7){
        printf("%s", "YES");
    }
    else{
        printf("%s", "NO");
    }
}
