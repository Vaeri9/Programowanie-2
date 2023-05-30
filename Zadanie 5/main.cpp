#include <iostream>
#include "Team.h"
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<Team> League;

	char n = 65;
	for (int i = 0; i < 9; i++) {
		int w = 0 + (rand() % 9);
		int d = 0 + (rand() % 9);
		int l = 0 + (rand() % 9);
		int g = 0 + (rand() % 9);
		int f = 0 + (rand() % 9);
		League.push_back(Team(n, w, d, l, g, f));
		n++;
	};

	cout << "The League" << endl;
    for (auto Team : League)
		cout << Team;
	cout << endl;

	int x;
	do{
		cout << "Choose the way in which the league will be sorted: " << endl;
		cout << "1 - by points" << endl << "2 - by wins" << endl << "3 - by loses" << endl << "4 - by goals" << endl << "5 - by lost goals" << endl << "6 - Exit the menu" << endl;
		cin >> x;

		sort(League.begin(), League.end(), [x](const Team& lhs, const Team& rhs) {
			switch (x) {
			case 1: return lhs.points > rhs.points;
			case 2: return lhs.wins > rhs.wins;
			case 3: return lhs.loses < rhs.loses;
			case 4: return lhs.goals > rhs.goals;
			case 5: return lhs.lostgoals < rhs.lostgoals;
			case 6: break;
			default: cout << "Incorrect input, try again";
				break;
			}
		});

		for (auto Team : League)
			cout << Team;
	} while (x != 6);

	return 0;
}
