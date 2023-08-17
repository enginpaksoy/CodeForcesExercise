#include <stdio.h>
#include <string.h>

int main(){
    int num;
    scanf("%d", &num);
    for (int j = 0; j < num; ++j){
        char array[100];
        int ab = 0, ba = 0;
        scanf("%s", array);
        for (int i = 0; i < strlen(array); i++) {
                if(array[i] == 'a' && array[i+1] == 'b') ab++;
            if(array[i] == 'b' && array[i+1] == 'a') ba++;
        }
        if(ab > ba) array[0] = 'b';
        else if(ba > ab) array[0] = 'a';
        printf("%s\n", array);
    }
}
