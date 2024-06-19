#include <iostream>
using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	int num = b + 1 <= n - a ? b + 1 : n - a;
	cout << num;
}
