#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    char s[100];
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%s", s);
        if (s[0] == 'T')
            counter = counter + 4;
        else if (s[0] == 'C')
            counter = counter + 6;
        else if (s[0] == 'O')
            counter = counter + 8;
        else if (s[0] == 'D')
            counter = counter + 12;
        else if (s[0] == 'I')
            counter = counter + 20;
    }
    printf("%d", counter);
}
