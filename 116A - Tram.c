#include <stdio.h>

int main() {
    int number_stop;
    int exits_person[1001], enters_person[1001];
    scanf("%d", &number_stop);
    int counter[] = {};
    int people[] = {};
    int people_max = 0;
    for (int i = 1; i <= number_stop; ++i) {
        scanf("%d %d", &exits_person[i], &enters_person[i]);
    }
    for (int i = 1; i < number_stop; i ++) {
        counter[i] = enters_person[i] - exits_person[i];
        people[i] = people[i-1] + counter[i];
        if(people[i] > people_max){
            people_max = people[i];
        }
    }
    printf("%d", people_max);
}
