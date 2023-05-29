#include <iostream>
#include <cstdlib>
#include "Team.h"

ostream& operator<<(ostream& output, Team& data) {
	output << "Name: " << data.name << "\t" << "Wins: " << "\t" << "\033[;32m" << data.wins << "\t" << "\033[0m" << "Draws: " << data.draws << "\t" << "Loses: " << "\033[;31m" << data.loses << "\t" << "\033[0m" << "Goals: " << "\033[;32m" << data.goals << "\t" << "\033[0m" << "Lost goals: " << "\033[;31m" << data.lostgoals << "\t" << "\033[0m" << "Points: " << "\033[1;37m" << data.points << "\t" << "\033[0m" << endl;
	return output;
};

Team::Team(char n, int w, int d, int l, int g, int lg) {
	name = n;
	wins = w;
	draws = d;
	loses = l;
	goals = g;
	lostgoals = lg;
	Team::countPoints();

}

int Team::countPoints() {
	points = 3 * wins + draws;
	return points;
}
