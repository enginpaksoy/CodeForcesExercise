#include <iostream>
using namespace std;

int main() {
	int t;
	string x;
	int a, b;
	cin >> t;
	for (size_t i = 0; i < t; i++){
		a = 0, b = 0;
		cin >> x;
		for (size_t i = 0; i < 5; i++){
			if (x[i] == 'A')a++;
			else b++;
		}
		char c;
		if (a > b) c = 'A';
		else c = 'B';

		printf("%c\n", c);
	}
}
