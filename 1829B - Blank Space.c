#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	for (int i = 0; i < x; i++){
		int y;
		int n[100];
		int max = 0, most = 0;
		scanf("%d", &y);
		for (int i = 0; i < y; i++) {
			scanf("%d", &n[i]);
			if (n[i] == 0) {
				max++;
				if(max > most){
					most = max;
				}
			}
			else {
				max = 0;
			}
		}
		printf("%d\n", most);
	}
}
