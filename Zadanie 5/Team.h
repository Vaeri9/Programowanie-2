#include <string>
using namespace std;

class Team {
public:
	char name;
	int wins;
	int draws;
	int loses;
	int goals;
	int lostgoals;
	int points;
	//Team();     //jak to jest odkomentowane to wywala potezny error
	Team(char n, int w, int d, int l, int g, int lg);
	int countPoints();
	friend ostream& operator<<(ostream& output, Team& data);
	//~Team();


}; 
