#include <iostream>
using namespace std;

int medium_num(int a, int b, int c);
int a, b, c;

int main() {
	int t;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> a >> b >> c;
		cout << medium_num(a, b, c) << endl;
	}
}

int medium_num(int a, int b, int c) {
	int ar[3], hold;
	ar[0] = a; ar[1] = b; ar[2] = c;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (ar[i] > ar[j]) {
				hold = ar[j];
				ar[j] = ar[i];
				ar[i] = hold;
			}
		}
	}
	return ar[1];
}
