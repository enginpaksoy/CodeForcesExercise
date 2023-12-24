#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    int a, b, c, n;
	int ar[3];
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> a >> b >> c >> n;
		ar[0] = a;
		ar[1] = b;
		ar[2] = c;
		sort(ar, ar + 3);
		if ((n - ((ar[2] - ar[1]) + (ar[2] - ar[0]))) % 3 == 0 && n >= ((ar[2] - ar[1]) + (ar[2] - ar[0]))) cout << "YES\n";
		else cout << "NO\n";
	}

}
