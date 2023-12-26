#include <iostream>
using namespace std;

int main() {
    int t, sum = 0;
    cin >> t;
	for (size_t i = 0; t > 0; t /= 2)
	{
		sum += t % 2;
	}
	cout << sum;
}
