#include <iostream>
using namespace std;

int main(void) {
	int n, x, y, z;
	int sum_x = 0;
	int sum_y = 0;
	int sum_z = 0;

	cin >> n;
	for(size_t i = 0; i < n; i++){
		cin >> x >> y >> z;
		sum_x += x;
		sum_y += y;
		sum_z += z;
	}
	if(sum_x == 0 && sum_y == 0 && sum_z == 0) cout << "YES\n";
	else cout << "NO\n";
}
