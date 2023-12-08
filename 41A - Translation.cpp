#include <iostream>
using namespace std;

int main() {
	string str1, str2;
	cin >> str1;
	cin >> str2;
	if (str1.length() != str2.length()) {
		printf("NO");
		return 0;
	}
	for (size_t i = 0; i < str2.length(); i++)
	{
		if (str1[i] != str2[str2.length() - 1 - i]) {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
