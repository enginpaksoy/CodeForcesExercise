#include <iostream>
using namespace std;

int main() {
    int t, n, H, M, h, m;
    cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> n >> H >> M;
		int min_t = 24*60;
		int time = 60 * H + M;
		for (size_t i = 0; i < n; i++)
		{
			cin >> h >> m;
			int time2 = 60 * h + m;
			if (time2 >= time) min_t = min(min_t, (time2 - time));
			else min_t = min(min_t, (24 * 60 - time) + time2);
		}
		cout << min_t / 60 << ' ' << min_t % 60 << '\n';
	}
}
