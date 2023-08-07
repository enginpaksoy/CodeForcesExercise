#include <stdio.h>
#include <string.h>

void abbreviate(char a[]);

int main(){
    char a[101];
    int num;
    scanf("%d", &num);
    for (size_t i = 0; i < num ; i++) {
        scanf("%s", a);
        abbreviate(a);
    }
    return 0;
}
void abbreviate(char a[]){
    size_t length_a = strlen(a);
    if(length_a > 10){
        printf("%c%zu%c\n", a[0], length_a - 2, a[length_a - 1]);
    }
    else if(length_a <= 10){
        printf("%s\n", a);
    }
}
