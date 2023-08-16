#include <stdio.h>
#include <stdlib.h>
#define ROWS 5
#define COLUMNS 5

int main() {
    int array[ROWS][COLUMNS];
    int result;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 1) {
                int a = abs(i - 2);
                int b = abs(j - 2);
                result = a + b;
            }
        }
    }
    printf("%d", result);
}
