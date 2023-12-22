#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	int n, l, a[1000];
	double d;
	cin >> n >> l;
	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	d = max(a[0], l - a[n-1]);
	for (int i = 0; i < n-1; i++)
	{
		d = max(d, (a[i+1] - a[i])/2.0);
	}
	cout << fixed << showpoint;
	cout << setprecision(10);
	cout << d;
}
