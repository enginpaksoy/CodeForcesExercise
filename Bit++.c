#include <stdio.h>
#include <string.h>

int main(){

    int number_statements, x_result;
    x_result = 0;
    scanf("%d", &number_statements);
    char array[4];
    for (int i = 0; i < number_statements; ++i) {
        scanf("%s", array);
        while(i < number_statements) {
            if (strcmp(array, "++X") == 0 || strcmp(array, "X++") == 0) {
                ++x_result;
            }
            if (strcmp(array, "--X") == 0 || strcmp(array, "X--") == 0) {
                --x_result;
            }
            break;
        }
    }
    printf("%d", x_result);

}
