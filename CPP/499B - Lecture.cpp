#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
	string n, m, s;
	unordered_map<string, string> map1;
	unordered_map<string, string> map2;
	int t, x;
	cin >> t >> x;
	for (int i = 0; i < x; i++){
		cin >> n >> m;
		map1[n] = m;
		map2[m] = n;
	}
	vector<string> z;
	for (int i = 0; i < t; i++){
		string x;
		cin >> s;
		x = s.size() <= map1[s].size() ? s : map1[s];
		x = s.size() <= map2[s].size() ? s : map2[s];
		z.push_back(x);
	}

	for (int i = 0; i < z.size(); i++){
		cout << z[i] << ' ';
	}
}
