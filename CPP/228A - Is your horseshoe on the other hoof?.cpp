#include <iostream>
#include <set>
 
using std::cin, std::cout, std::set;
 
int main() {
	int x;
	set<int> a;
	for (size_t i = 0; i < 4; i++)
	{
		cin >> x;
		a.insert(x);
	}
	cout << 4 - a.size();
}
