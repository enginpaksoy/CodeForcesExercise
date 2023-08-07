#include <stdio.h>

int can_divide_watermelon(int a){
    if(a < 4){
        return 0; //false
    }
    if(a % 2 == 0 && a >= 1 && 100 >= a){
        return 1; //true
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    scanf("%d", &num);
    if(can_divide_watermelon(num)){
        printf("%s", "YES");
    }
    else{
        printf("%s", "NO");
    }
}
