#include <iostream>
using namespace std;

int main() {
	int t, c;
	string str;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> str;
		if (str.length() % 2 == 1) {
			cout << "NO\n";
		}
		else
		{
			c = 0;
			for (size_t i = 0; i < str.length() / 2; i++)
			{
				if (str[i] != str[str.length() / 2 + i]) {
					cout << "NO\n";
					c = c + 1;
					break;
				}
			}
			if (c == 0)
			{
				cout << "YES\n";
			}
		}
	}
}
