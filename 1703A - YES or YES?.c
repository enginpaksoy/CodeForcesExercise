#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char s[4];
        scanf("%s", s);
        if((s[0] == 89 || s[0] == 121) && (s[1] == 69 || s[1] == 101) && (s[2] == 83 || s[2] == 115)){
            printf("%s", "YES\n");
        }
        else{
            printf("%s", "NO\n");
        }
    }
}
