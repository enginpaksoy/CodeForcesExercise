#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 101

int main() {
    char str1[SIZE] = "";
    char str2[SIZE] = "";
    scanf("%s \n %s", str1, str2);
    for (int i = 0; str1[i] != '\0'; ++i) {
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; str2[i] != '\0'; ++i) {
        str2[i] = tolower(str2[i]);
    }
    int result = strcmp(str1, str2);
    printf("%d", result);
}
