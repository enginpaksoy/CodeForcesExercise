#include <iostream>
using namespace std;

int main()
{
	int n;
	string word = "codeforces";
	int alphabet[26] = {0};
	for (size_t i = 0; i < word.size(); i++)
	{
		if(word[i] > 96 && word[i] < 123)
		{
			alphabet[word[i] - 'a']++;
		}
	}
	/*for (size_t i = 0; i < 26; i++)
	{
		cout << alphabet[i] << endl;
	}*/
    cin >> n;
	cin.ignore(); // We use cin.ignore() to discard the newline character ('\n') from the input buffer after reading a value with cin to prevent it from interfering with subsequent input operations.
	char c;
	for (size_t i = 0; i < n; i++)
	{
		cin.get(c);
		cin.ignore();
		if (c >= 'a' && c <= 'z')
		{
			if(alphabet[c - 'a'] > 0)
			{
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}
