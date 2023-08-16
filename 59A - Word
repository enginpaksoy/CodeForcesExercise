#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[101];
    scanf("%s", s);
    int counter_uppercase = 0, counter_lowercase = 0;
    for (int i = 0; i < 101 && s[i] != '\0'; ++i) {
        if(s[i] < 123 && s[i] > 96){
                ++counter_lowercase;
        }
        else if(s[i] < 91 && s[i] > 64){
            ++counter_uppercase;
        }
    }
    if(counter_lowercase >= counter_uppercase){
        for (int i = 0; s[i]; ++i) {
            s[i] = tolower(s[i]);
        }
    }
    else if(counter_uppercase > counter_lowercase){
        for (int i = 0; s[i]; ++i) {
            s[i] = toupper(s[i]);
        }
    }
    printf("%s", s);
}
