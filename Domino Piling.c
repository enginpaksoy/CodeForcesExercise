#include <stdio.h>

int main(){
    int width, length;
    scanf("%d %d", &width, &length);
    int number_of_pieces;
    number_of_pieces = width * length / 2;
    printf("%d", number_of_pieces);
}
