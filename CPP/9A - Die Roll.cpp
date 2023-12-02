#include <iostream>
using namespace std;

int main() {
	int y, w;
	int A, B;
	cin >> y >> w;
	int highest;
	if (y > w) highest = y;
	else highest = w;
	A = 6 - (highest - 1);
	B = 6;
	for (int i = 6; i > 0; i--)
	{
		if ((A % i == 0) && (B % i == 0)) {
			A /= i;
			B /= i;
		}
	}
	cout << A << '/' << B;


}
