#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        if(i % 2 == 0){
            for (int j = 0; j < m; ++j) {
            printf("#");
            }
        }
        else if(i % 2 == 1){
            if(counter % 2 == 0){
                for (int j = 0; j < m -1; ++j) {
                    printf(".");
                }
                printf("#");
                counter++;
            }
            else if(counter % 2 == 1){
                printf("#");
                for (int j = 0; j < m-1; ++j) {
                    printf(".");
                }
                counter++;
            }
        }
        printf("\n");
    }
}
