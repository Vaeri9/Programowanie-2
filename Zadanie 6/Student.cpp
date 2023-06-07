#include "Student.h"
#include <fstream>
#include <iostream>

using namespace std;


Student::Student(string n, string s, int id, int g, int y) {
	Name = n;
	Surname = s;
	ID = id;
	Group = g;
	Year = y;
};

ifstream& operator>>(ifstream& input, Student& data) {
	input >> data.Name >> data.Surname >> data.ID >> data.Group >> data.Year;  //tu sie sutomatycznie robi endl
	return input;
};

ofstream& operator<<(ofstream& output, Student& data) {
	output << data.Name << endl << data.Surname << endl << data.ID << endl << data.Group << endl << data.Year << endl;
	return output;
};

ostream& operator<<(ostream& output, Student& data) {  //koniecznie te referencje
	//output << "nazwisko = " << data.nazwisko << ", wiek = " << data.wiek << endl;
	output << "Name: " << data.Name << " Surname: " << data.Surname << " ID: " << data.ID << " Group: " << data.Group << " Year: " << data.Year << endl;
	return output;
};

istream& operator>>(istream& input, Student& data) {
	cout << "Input name ";
	input >> data.Name;
	cout << "Input surname ";
	input >> data.Surname;   
	cout << "Input ID ";
	input >> data.ID;
	cout << "Input group ";
	input >> data.Group;
	cout << "Input year: ";
	input >> data.Year;
	return input;
};
