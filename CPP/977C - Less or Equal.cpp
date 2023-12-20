#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, k, a[200000], answer, counter = 0;
	cin >> n >> k;
	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	answer = a[k - 1];
	if (k == 0) answer = a[0] - 1;
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] <= answer) {
			counter++;
		}
	}
	if (counter != k || answer < 1) {
		cout << "-1";
	}
	else cout << answer;
}

