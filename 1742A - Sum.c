#include <stdio.h>

int main() {
    int n, a, b, c;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d %d %d", &a, &b, &c);
        if(a == b+c || b == a+c || c == a+b){
            printf("%s", "YES\n");
        }
        else{
            printf("%s", "NO\n");
        }
    }
}
