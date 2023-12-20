#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	int n, m, boys[100], girls[100];
	cin >> n;
	for (size_t i = 0; i < n; i++){
		cin >> boys[i];
	}
	cin >> m;
	for (size_t i = 0; i < m; i++){
		cin >> girls[i];
	}
	sort(boys, boys + n);
	sort(girls, girls + m);
	int k = 0;
	for (size_t i = 0; i < n; i++){
		for (size_t l = 0; l < m; l++){
			if (abs(boys[i]-girls[l]) < 2) {
				girls[l] = -2;
				k++;
				break;
			}
		}
	}
	cout << k << "\n";
}
 
