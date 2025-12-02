// Lab301_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string> 

int main() {
	string studentID;
	string studentName;
	int score;
	string grade;

	cout << "Enter student ID: ";
	cin >> studentID;
	cin.ignore();
	cout << "Enter student name: ";
	getline(cin, studentName);
	cout << "Enter the Score:";
	cin >> score;

	if (score >= 90 && score <= 100) {
		grade = "A";
	}
	else if (score >= 80) {
		grade = "B";
	}
	else if (score >= 70) {
		grade = "C";
	}
	else if (score >= 60) {
		grade = "D";
	}
	else {
		grade = "F";
	}

	cout << endl;
	cout << "------ Student Report ------" << endl;
	cout << "Student ID : " << studentID << endl;
	cout << "Name       : " << studentName << endl;
	cout << "Score      : " << score << endl;
	cout << "Grade      : " << grade << endl;
	cout << "----------------------------" << endl;

	return 0;
}





	