#include <stdio.h>
#include <string.h>

int main()
{
    char b[100];
    scanf("%s", b);
    int frequency[27] = {0};
    for (int i = 0; i < strlen(b); ++i) {
        ++frequency[b[i]-97];
    }
    int counter = 0;
    for (int i = 0; i < 26; ++i) {
        if(frequency[i] != 0){
            ++counter;
        }
    }
    if(counter % 2 == 0){
        printf("%s", "CHAT WITH HER!");
    }
    else{
        printf("%s", "IGNORE HIM!");
    }

}
