#include <stdio.h>

void team_olympiad();

int main() {
	team_olympiad();
}

void team_olympiad(){
	int w, t, min;
	int p[3][5000], a[3] = { 0, 0, 0 };
	scanf("%d", &w);
	for (int i = 0; i < w; i++)
	{
		scanf("%d", &t);
		p[t - 1][a[t - 1]] = i + 1;
		a[t - 1]++;
	}
	min = (a[0] > a[1]) ? a[1] : a[0];
	if (a[2] < min) min = a[2];
	printf("%d", min);

	for (size_t i = 0; i < min; i++)
	{
		printf("\n%d %d %d", p[0][i], p[1][i], p[2][i]);
	}
}
