#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 0, level = 0;
	cin >> n;
	for (size_t i = 1; n >= 0; i++)
	{
		sum += i;
		n = n - sum;
		level++;
	}
	cout << level - 1;
}
