#include <stdio.h>

int main() {
	int t;
	int a, b;
	
	scanf("%d", &t);
	for (size_t i = 0; i < t; i++) {
		int even = 0, odd = 0;
		scanf("%d", &a);
		for (size_t i = 0; i < a; i++){
			scanf("%d", &b);
			if (b % 2 == 0) even++;
			else odd++;
		}
		if (odd % 2 == 0) printf("YES\n");
		else printf("NO\n");
	}
}
