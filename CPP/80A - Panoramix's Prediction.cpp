#include <iostream>
using namespace std;

int main() {
	int n, m, k = 0, lowest;
	cin >> n >> m;
	for (size_t i = n+1; k == 0; i++)
	{
		int x = 0;
		for (size_t j = 2; j < i; j++)
		{
			if (i % j == 0) {
				x++;
				if (i == m) { cout << "NO"; return 0; }
				else break;
			}
		}
		if (!k && !x) {
			k = 1;
			lowest = i;
		}
	}
	if (lowest == m) { cout << "YES"; return 0; }
	else cout << "NO";
}
