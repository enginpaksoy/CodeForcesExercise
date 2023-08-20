#include <stdio.h>
#include <string.h>

int main() {
    char array1[101], array2[101];
    scanf("%s %s", array1, array2);
    for (int i = 0; i < strlen(array1); ++i) {
        if(array1[i] == array2[i])
            array1[i] = '0';
        else if(array1[i] != array2[i])
            array1[i] = '1';
    }
    printf("%s", array1);
}
