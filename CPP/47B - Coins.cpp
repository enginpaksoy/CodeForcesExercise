#include <iostream>

using namespace std;

int main() {
	int ar[3] = { 0 };
	string str;
	
	for (size_t i = 0; i < 3; i++)
	{
		cin >> str;
		if (str[1] == '>') ar[str[0] - 'A']++;
		else ar[str[2] - 'A']++;
	}
	
	if (ar[0] == ar[1] || ar[0] == ar[2] || ar[1] == ar[2]) cout << "Impossible";
	
	else {
		for (size_t i = 0; i < 3; i++){
			for (size_t j = 0; j < 3; j++){
				if (i == ar[j]) cout << char('A' + j);
			}
		}
	}
}
