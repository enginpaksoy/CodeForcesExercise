#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a1, a2, a3, a4;
	string s;
	int sum = 0;
	cin >> a1 >> a2 >> a3 >> a4;
	cin >> s;
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] - '0' == 1)
		{
			sum += a1;
		}
		else if (s[i] - '0' == 2)
		{
			sum += a2;
		}
		else if (s[i] - '0' == 3)
		{
			sum += a3;
		}
		else if (s[i] - '0' == 4)
		{
			sum += a4;
		}
	}
	cout << sum << endl;
	
	return 0;
}
