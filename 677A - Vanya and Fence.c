#include <stdio.h>
#define SIZE 1000

int main(){
    int num, fence;
    scanf("%d %d", &num, &fence);
    int friends[SIZE] = {};
    int counter = 0;
    for (int i = 0; i < num; ++i) {
        scanf("%d", &friends[i]);
    }
    for (int j = 0; j < num; ++j) {
        if(friends[j] > fence){
            counter += 2;
        }
        else if(friends[j] <= fence){
            counter++;
        }
    }
    printf("%d", counter);
}
