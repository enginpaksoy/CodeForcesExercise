#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    char string_win_loss[num];
    scanf("%s", string_win_loss);
    int counter_Anton = 0;
    int counter_Danik = 0;
    for (int i = 0; i < num; ++i) {
        if(string_win_loss[i] == 'A'){
            counter_Anton++;
        }
        else if(string_win_loss[i] == 'D'){
            counter_Danik++;
        }
    }
    if(counter_Anton > counter_Danik){
        printf("%s", "Anton");
    }
    else if(counter_Danik > counter_Anton){
        printf("%s", "Danik");
    }
    else{
        printf("%s", "Friendship");
    }
}
