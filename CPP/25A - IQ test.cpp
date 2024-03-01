#include <iostream>
using namespace std;

int main() {
	int n;
	int a;
	int even = 0;
	int odd = 0;
	int last_even = 0;
	int last_odd = 0;

	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> a;
		if (a % 2 == 0) {
			even++;
			last_even = i+1;
		}
		else if (a % 1 == 0) {
			odd++;
			last_odd = i+1;
		}
	}	

	if (even > odd) cout << last_odd;
	else cout << last_even;	
}
