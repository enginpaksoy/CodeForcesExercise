#include <iostream>
using namespace std;
 
int main() {
	int n, m, c = 0;
	cin >> n >> m;
	char ch;
	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= m; j++)
		{
			cin >> ch;
			if (ch == 'C' || ch == 'M' || ch == 'Y') {
				cout << "#Color\n";
				c = c + 1;
				return 0;
			}
		}
	}
	if (c == 0) cout << "#Black&White\n";
	return 0;
}
