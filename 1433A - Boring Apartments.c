#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int no_apartment;
    int counter = 0;
    for (int i = 0; i < t; ++i) {
        scanf("%d", &no_apartment);
        int digits = no_apartment % 10;
        while(no_apartment){
            no_apartment /= 10;
            counter += 1;
        }
        int result = (digits-1) * 10 + counter * (counter+1) / 2;
        printf("%d\n", result);
        digits = 0, counter = 0;
    }
}
