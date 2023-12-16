#include <iostream>
using namespace std;
 
int main() {
	int array[26] = {0};
	string str1, str2, str3;
	cin >> str1;
	cin >> str2;
	cin >> str3;
	for (size_t i = 0; i < str3.length()+1; i++)
	{
		array[str3[i] - 'A']++;
	}
	for (size_t i = 0; i < str1.length(); i++)
	{
		if (array[str1[i] - 'A']) array[str1[i] - 'A']--;
		else { cout << "NO"; return 0; }
	}
	for (size_t i = 0; i < str2.length(); i++)
	{
		if (array[str2[i] - 'A']) array[str2[i] - 'A']--;
		else { cout << "NO"; return 0; }
	}
	for (size_t i = 0; i < 26; i++)
	{
		if (array[i] > 0) { cout << "NO"; return 0; }
	}
	cout << "YES";
}
