#include <stdio.h>

int absolute(int x, int y){
    if(x > y)
        return x - y;
    else
        return y - x;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int result = (absolute(a, b) + absolute(b,c) + absolute(c, a)) / 2;
    printf("%d", result);
}

  
