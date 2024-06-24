#include <iostream>
using namespace std;

int main() {
	int t;
	char s;
	cin >> t;
	for (int i = 0; i < t; i++){
		for (int j = 0; j < 8; j++) {
			for (int k = 0; k < 8; k++){
				cin >> s;
				if (s != '.') cout << s;
			}
		}
		cout << "\n";
	}
}
