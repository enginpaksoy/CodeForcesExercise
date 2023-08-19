#include <stdio.h>

int main(){
    int n, t;
    scanf("%d%d", &n, &t);
    char array_queue[n];
    scanf("%s", array_queue);
    while (t--) {
        for (int j = 0; j <= n-1;) {
            if (array_queue[j] == 'B' && array_queue[j + 1] == 'G') {
                char temp = array_queue[j];
                array_queue[j] = array_queue[j + 1];
                array_queue[j + 1] = temp;
                j += 2;
            } else {
                j += 1;
            }
        }
    }
    printf("%s", array_queue);
}
