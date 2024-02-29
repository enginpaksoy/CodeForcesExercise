#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t, n, array[50];
	int sum;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> array[j];
		}
		sort(array, array + n);
		
		sum = 0;
		for (int k = 0; k < n; k++)
		{
			//cout << array[k];
			sum += array[k] - array[0];
		}
		cout << sum << "\n";		
	}
}
