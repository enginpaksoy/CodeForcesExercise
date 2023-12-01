#include <iostream>
using namespace std;

int main() {
	int t, n;
	int array[100];
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> n;
		for (size_t j = 1; j <= n; j++)
		{
			cin >> array[j];
		}
		for (size_t k = 2; k <= n; k++)
		{
			if (array[1] != array[2] && array[2] == array[3]) {
				cout << 1 << endl;
				break;
			}
			if ((array[k] != array[k - 2]) && (array[k] != array[k - 1])) {
				cout << k << endl;
				break;
			}
		}
	}
}
