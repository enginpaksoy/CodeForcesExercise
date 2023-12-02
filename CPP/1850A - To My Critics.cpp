#include <iostream>
using namespace std;

void sum_10(int a, int b, int c);
int a, b, c;

int main() {
	int t;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> a >> b >> c;
		sum_10(a, b, c);
	}
}

void sum_10(int a, int b, int c) {
	if ((a + b >= 10) || (a + c >= 10) || (b + c >= 10))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
