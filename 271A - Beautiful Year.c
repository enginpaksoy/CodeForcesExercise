#include <stdio.h>

int main() {
    int year, q, w, e, r;
    scanf("%d", &year);
    do{
        year++;
        q = year % 10;
        w = year % 100 / 10;
        e = year % 1000 / 100;
        r = year / 1000;
        if(q != w && q != e && q != r && w != e && w != r && e != r){
            printf("%d", year);
            return 0;
        }
    } while (1);
}
