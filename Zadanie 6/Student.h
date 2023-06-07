#include <string>
using namespace std;

class Student {
public:
	string Name;
	string Surname;
	int ID;
	int Group;
	int Year;

	Student(string n, string s, int id, int g, int y);
	friend ifstream& operator>>(ifstream& input, Student& data);
	friend ofstream& operator<<(ofstream& output, Student& data);
	friend ostream& operator<<(ostream& output, Student& data);
	friend istream& operator>>(istream& input, Student& data);
};
