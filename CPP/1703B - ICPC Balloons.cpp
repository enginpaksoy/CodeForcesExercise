#include <iostream>
using namespace std;

int main(void) {
	int t, n, point;
	string str;
	cin >> t;	
	for (int i = 0; i < t; i++){
		point = 0;
		int freq[26] = { 0 };
		cin >> n;
		cin >> str;
		for (size_t j = 0; j < str.length(); j++)
		{
			if (freq[str[j] - 'A'] == 0) {
				point += 2;
				freq[str[j] - 'A'] = 1;
			}
			else if (freq[str[j] - 'A'] == 1) {
				point++;
			}
		}
		cout << point << "\n";
	}
}
