#include <iostream>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	cout << 8 + n % 2 << " " << n - (8 + n % 2);
}
