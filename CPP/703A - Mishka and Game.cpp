#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int dice1, dice2;
	int player_a = 0, player_b = 0;

	for (size_t i = 0; i < n; i++)
	{
		cin >> dice1 >> dice2;
		if (dice1 > dice2) player_a++;
		else if (dice2 > dice1) player_b++;
	}

	if (player_a > player_b) cout << "Mishka";
	else if (player_b > player_a) cout << "Chris";
	else if (player_a == player_b) cout << "Friendship is magic!^^";
}  
