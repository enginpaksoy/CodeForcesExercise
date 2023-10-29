#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string a;
		cin >> a;
		int len = a.size();
		for (size_t i = 0; i < len; i += 2)
		{
			cout << a[i];
		}
		cout << a[len - 1] << endl;
	}
}
