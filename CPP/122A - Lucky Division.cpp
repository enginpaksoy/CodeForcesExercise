#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> lucky = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777 };
	int n;
	bool flag = false;
	cin >> n;
	for (int i = 0; i < lucky.size(); i++) {
		if (n % lucky[i] == 0) {
			cout << "YES";
			flag = true;
			break;
		}
	}
	if (!flag) {
		cout << "NO";
	}

	return 0;
}
