#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	if (t % 2 == 0) {
		cout << t / 2 << endl;
		for (size_t i = 0; i < t/2; i++)
		{
			cout << 2 << " ";
		}
	}
	else if (t % 2 == 1)
	{
		cout << t / 2 << endl;
		for (size_t i = 0; i < (t / 2) - 1; i++)
		{
			cout << 2 << " ";
		}
		cout << 3;
	}
}
