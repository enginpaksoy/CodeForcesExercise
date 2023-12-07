#include <stdio.h>
 
int main() {
	int t;
	scanf("%d", &t);
	for (int j = 0; j < t; j++)
	{
		int n;
		scanf("%d", &n);
		int freq[26] = { 0 };
		char ch[50];
		int x = 0;
		scanf("%s", ch);
		for (int i = 0; i < n; i++)
		{
			if(ch[i] != ch[i+1]) freq[ch[i] - 65]++;
		}
		for (int i = 0; i < 26; i++)
		{
			if (freq[i] > 1) {
				printf("NO\n");
				x++;
				break;
			}
		}
		if (x == 0) printf("YES\n");
	}
}
