#include <stdio.h>

int main() {
	int t, n;
	char x[100], y[100];
	char v;
	int row;
	scanf("%d", &t);
	for (size_t i = 0; i < t; i++){
		row = 0;
		scanf("%d", &n);
		scanf("%s", x);
		scanf("%s", y);
		for (size_t i = 0; i < n; i++){
			if (x[i] == y[i])row++;
			else if (x[i] != y[i] && x[i] != 'R' && y[i] != 'R')row++;
			else break;
		}
		if (row != n) printf("NO\n");
		else printf("YES\n");
	}
}
