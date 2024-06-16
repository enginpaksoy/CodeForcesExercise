#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    long long arr[81];
    int num;
    int sum;
    int count = 0;

    for (int i = 1; i < 10; i++) {
        long long num = i;
        while (num < pow(10,9)) {
            arr[count++] = num;
            num = num * 10 + i;
        }
    }
    cin >> t;
    for (int i = 0; i < t; i++){
        sum = 0;
        cin >> num;
        int j = 0;
        while (j < 81){
            if (arr[j] <= num) sum++;
            j++;
        }
        cout << sum << "\n";
    }

    return 0;
}
