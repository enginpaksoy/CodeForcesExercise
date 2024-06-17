#include <iostream>
using namespace std;

int main() {
	string s;
	bool flag = true;
	cin >> s;
	for (int i = 1; s[i] != '\0'; i++) {
		if (!(s[i] >= 'A' && s[i] <= 'Z')) {
			flag = false;
		}
	}

	if (flag == true) {
		for (int i = 0; s[i] != '\0'; i++){
			if ((s[i] >= 'A' && s[i] <= 'Z')) {
				s[i] += 'a' - 'A';
			}
			else {
				s[i] -= 'a' - 'A';
			}
		}
	}
	cout << s;
}
