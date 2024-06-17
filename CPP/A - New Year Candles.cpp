#include <iostream>
using namespace std;

int main() {
	int a, b;
	int sum = 0, rem = 0;
	cin >> a >> b;
	
	sum += a;
	rem += a;

	for (int i = 0; rem >= b; i++){
		sum += rem / b;
		rem = (rem / b) + rem % b;
	}
	cout << sum;
}
