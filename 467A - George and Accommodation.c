#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int array_already_live[100];
    int array_room_capacity[100];
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &array_already_live[i], &array_room_capacity[i]);
        if(array_room_capacity[i] >= array_already_live[i] + 2){
            counter++;
        }
    }
    printf("%d", counter);
}
