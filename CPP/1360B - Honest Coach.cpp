#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (size_t k = 0; k < t; k++)
	{
		int n, ath, ar[50];
		cin >> n;
		for (size_t i = 0; i < n; i++)
		{
			cin >> ath;
			ar[i] = ath;
		}
		for (size_t i = 0; i < n; i++){
			for (size_t j = 0; j < n; j++){
				if (ar[i] < ar[j] && i != j) {
					int hold = ar[i];
					ar[i] = ar[j];
					ar[j] = hold;
				}
			}
		}
		int smallest = 1000;
		for (size_t i = 0; i < n-1; i++)
		{
			if ((ar[i + 1] - ar[i]) < smallest) smallest = (ar[i + 1] - ar[i]);
		}
		cout << smallest << endl;
	}
}
