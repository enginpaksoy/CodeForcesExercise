#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char s1[] = "that I love";
    char s2[] = "that I hate";
    char last[] = "it";
    char first[] = "I hate";
    printf("%s", first);
    for (int i = 1; i < n;) {
        if(i % 2 == 1){
            printf(" %s", s1);
            i++;
        }
        else if(i % 2 == 0){
            printf(" %s", s2);
            i++;
        }
    }
    printf(" %s", last);
}
