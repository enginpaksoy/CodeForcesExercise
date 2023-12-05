#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		char ch;
		char name[] = "Timur";
		int freq[5] = {0};
		for (size_t i = 0; i < n; i++)
		{
			cin >> ch;
			for (size_t j = 0; j < 5; j++)
			{
				if (ch == name[j]) freq[j]++;
			}
		}
		if (n == 5) {
			int k = 0;
			for (size_t i = 0; i < 5; i++)
			{
				if (freq[i])
				{
					k++;
				}
			}
			if (k == 5) cout << "YES" << endl;
			else cout << "NO" << endl;

		}
		else cout << "NO" << endl;
	}
}
