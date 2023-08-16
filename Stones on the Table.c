#include <stdio.h>
 
int main() {
    int num;
    int counter = 0;
    scanf("%d", &num);
    char array[num];
    scanf("%s", array);
    for(int i = 0; i<num; i++){
        if(array[i] == array[i+1]){
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}
