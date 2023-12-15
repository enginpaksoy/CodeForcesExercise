#include <iostream>
#include <set>

using namespace std;

int main() {
	set<char> set_name;
	char ch;
	while (1)
	{
		cin >> ch;
		if (isalpha(ch) == 2) set_name.insert(ch);
		else if (ch == '}') break;
	}
	cout << set_name.size();
}
