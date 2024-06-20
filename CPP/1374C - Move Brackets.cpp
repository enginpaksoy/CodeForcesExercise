#include <iostream>
using namespace std;

int main() {
	int t, n;
	string s;
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> n;
		cin >> s;
		int num = 0;
		int ans = 0;
		for (int j = 0; j < n; j++){
			if (s[j] == '(') num++;
			else{
				num--;
				if (num < 0) {
					num = 0;
					ans++;
				}
			}
		}
		cout << ans << "\n";
	}
}
