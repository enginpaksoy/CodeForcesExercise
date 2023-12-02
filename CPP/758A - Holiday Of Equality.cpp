#include <iostream>
using namespace std;

int main() {
	int n;
	int highest = 0, spent_sum = 0;
	int ar[100];
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> ar[i];
		if (highest < ar[i]) highest = ar[i];
	}
	for (size_t i = 0; i < n; i++)
	{
		spent_sum += highest - ar[i];
	}
	cout << spent_sum;
}
