#include <iostream>
#include <vector>
#include <algorithm>
#define pb push_back
using namespace std;

int main() {
	int s, n;
	bool no = false;
	vector<pair<int, int>> dragon;
	cin >> s >> n;
	for (int i = 0; i < n; i++){
		pair<int, int> a;
		cin >> a.first >> a.second;
		dragon.push_back(a);
	}
	sort(dragon.begin(), dragon.end());
	
	for (int i = 0; i < n; i++){
		if (s <= dragon[i].first) {
			no = true;
			break;
		}
		else {
			s += dragon[i].second;
		}
	}
	if (no) cout << "NO";
	else cout << "YES";
	
}
