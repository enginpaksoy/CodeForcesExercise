#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int number;
    for (int i = 0; i < t; ++i) {
        int a[6];
        scanf("%d", &number);
        for (int j = 0; j < 6; ++j) {
            a[j] = number % 10;
            number = number / 10;

        }
        if(a[0] + a[1] + a[2] == a[3] + a[4] + a[5]){
            printf("YES\n");
        }
        else if(a[0] + a[1] + a[2] != a[3] + a[4] + a[5]){
            printf("NO\n");
        }
        number = 0;
    }
}
