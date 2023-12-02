#include <iostream>
using namespace std;

int main() {
	int t, hh, mm, h = 0, m = 0;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> hh >> mm;
		m = 60 - mm;
		h = 23 - hh;
		cout << m + h * 60 << endl;
	}
}
