#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a = 8;
	long long n;
	cin >> n;
	if (n % 4 == 0 && n != 0) n = 4;
	else if (n == 0) n = 0;
	else n = n % 4;
	int last_digit = (int)pow(8, n) % 10;
	cout << last_digit;
}
