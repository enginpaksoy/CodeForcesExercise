#include <iostream>
using namespace std;

void fair(int a, int b, int c, int d);

int main() {
	int t, a, b, c, d;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> a >> b >> c >> d;
		fair(a, b, c, d);
	}
}

void fair(int a, int b, int c, int d) {
	int finalist1, finalist2;
	if (a > b) finalist1 = a;
	else finalist1 = b;
	if (c > d) finalist2 = c;
	else finalist2 = d;
	
	int ar[4];
	ar[0] = a, ar[1] = b, ar[2] = c, ar[3] = d;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (ar[i] < ar[j] && i != j) {
				int hold = ar[i];
				ar[i] = ar[j];
				ar[j] = hold;
			}
		}
	}

	if ((ar[0] == a || ar[0] == b) && (ar[1] == c || ar[1] == d) || (ar[1] == a || ar[1] == b) && (ar[0] == c || ar[0] == d)) cout << "YES" << endl;
	else cout << "NO" << endl;
}
