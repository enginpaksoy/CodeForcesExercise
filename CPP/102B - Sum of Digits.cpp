#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string s;
	long long n = 0;
	cin >> s;
	int i = 0;
	for (i = 0; s[i] != '\0'; i++){
		n += s[i] - '0';
	}
	if (i == 1) {
		cout << 0;
		return 0;
	}
	int k = 1;
	while (n >= 10) {
		int sum = 0;
		while (n > 0){
			sum += n % 10;
			n /= 10;
		}
		n = sum;
		k++;
	}
	cout << k;
}
