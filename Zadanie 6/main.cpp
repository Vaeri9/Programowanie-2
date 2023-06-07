#include "Student.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void fun(Student p) {
	cout << p;
};

int main() {
	vector<Student> Students;

	char n = 65;
	char s = 97;

	for (int i = 0; i < 9; i++) {
		string name(1,n);
		string surname(1, s);
		int id = (rand() % 101) + 500;
		int g = 0 + (rand() % 31 + 100);
		int y = 0 + (rand() % 4 + 1);
		Students.push_back(Student(name, surname, id, g, y));
		n++;
		s = s + 3;
	};

	ofstream file("data.txt");  

	for_each(Students.begin(), Students.end(), [](Student p) {cout << p << endl; });

	vector<Student> ::iterator p;  

	for (p = Students.begin(); p != Students.end(); p++) {
		cout << "Zapis studenta " << p->Name << " " << p->Surname << " do pliku" << endl;  
		file << *p << endl;
	}

	file.close(); 

	ifstream file("dane.txt");

	Student A;
	while (file >> A) {
		Students.push_back(A);

	}

	file.close();

	cout << endl << count_if(Students.begin(), Students.end(), [](Student p){return (p.Year == 3);  });


	return 0;
}
