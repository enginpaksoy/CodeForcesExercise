#include <stdio.h>
 
int main() {
	int x;
	int hour, min;
	
	scanf("%d", &x);
	for (int i = 0; i < x; i++){
		scanf("%d:%d", &hour, &min);
		if (hour < 12 && hour > 0) {
			printf("%.2d:%.2d AM\n", hour, min);
		}
		else if (hour == 0) {
			printf("%.2d:%.2d AM\n", hour+12, min);
		}
		else if (hour == 12) {
			printf("%.2d:%.2d PM\n", hour, min);
		}
		else {
			printf("%.2d:%.2d PM\n", hour-12, min);
		}
	}
}
