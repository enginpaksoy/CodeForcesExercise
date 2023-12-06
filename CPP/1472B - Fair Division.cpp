#include <iostream>

using namespace std;

void can_divide();

int main() {
	int t;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		can_divide();
	}
}

void can_divide() {
	int n, a, sum = 0, num1 = 0, num2 = 0;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
		if (a == 1) num1++;
		else if (a == 2) num2++;
		
	}
	if (sum % 2 != 0) cout << "NO" << endl;
	if (sum % 2 == 0)
	{
		if ((num2 % 2 == 1) && (num1 % 2 == 0) && num1 >= 2) {
			cout << "YES" << endl;
		}
		else if ((num2 % 2 == 0) && (num1 % 2 == 0)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
