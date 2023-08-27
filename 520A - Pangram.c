#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char array[n];
    scanf("%s", array);
    int frequency[26] = {0};
    for (int i = 0; i < n; ++i) {
        if (array[i] > 64 && array[i] < 91) {
            ++frequency[array[i] - 65];
        } else if (array[i] > 96 && array[i] < 123) {
            ++frequency[array[i] - 97];
        }
    }
    for (int i = 0; i < 26; ++i) {
        if(frequency[i] == 0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
