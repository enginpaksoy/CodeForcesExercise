#include <iostream>
#include <string>
using namespace std;

void borze(string s) {
	int a = s.size();
	if(a > 0){
		for (size_t i = 0; i < a; i++)
		{
			if (s[i] == '-' && s[i + 1] == '.') {
				cout << 1;
				i++;
			}
			else if (s[i] == '-' && s[i + 1] == '-') {
				cout << 2;
				i++;
			}
			else if (s[i] == '.') {
				cout << 0;
			}
		}
	}
}

int main() {
	string s;
	getline(cin, s);
	borze(s);
}
