#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int answers[n];
    int flag = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &answers[i]);
        flag += answers[i];
    }
    if(flag != 0){
        printf("HARD");
    }
    else{
        printf("EASY");
    }
}
