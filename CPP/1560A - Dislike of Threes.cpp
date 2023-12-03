#include <iostream>
using namespace std;

int main() {
	int t, k, x, ar[1000];
	cin >> t;
	for (size_t i = 0, k = 1; i < 1000; i++, k++)
	{
		while (k % 3 == 0 || k % 10 == 3)
		{
			k++;
		}
		ar[i] = k;
	}
	for (size_t i = 0; i < t; i++)
	{
		cin >> x;
		cout << ar[x-1] << endl;
	}
}
