#include <iostream>
using namespace std;

void division(int rating);

int main() {
	int t, rating;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> rating;
		division(rating);
	}
}

void division(int rating) {
	if (rating >= 1900) cout << "Division 1" << endl;
	if (rating <= 1899 && rating >= 1600) cout << "Division 2" << endl;
	if (rating <= 1599 && rating >= 1400) cout << "Division 3" << endl;
	if (rating <= 1399) cout << "Division 4" << endl;
}
