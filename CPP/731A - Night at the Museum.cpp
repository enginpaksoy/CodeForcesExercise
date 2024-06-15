#include <iostream>
using namespace std;

int main() {
    string s; 
    int sum = 0;
    int add;
    char x = 'a';
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        int difference = abs(s[i] - x);
        add = min(difference, 26 - difference);
        sum += add;
        x = s[i];
    }
    cout << sum;
}
