#include <iostream>
#include <string>
using namespace std;

struct Phone {
	string mobile;
	string home;
};

struct Parent {
	string name;
	string relationship;
	Phone contact;
};
struct Student {
	string id;
	string nickname;
	string lineId;
	Phone myContact;
	Parent myParent;
};


void inputData(Student& s) {
	cout << " กรุณากรอกข้อมูล (Input Data)\n";

	// 1. Student Data
	cout << "1. Student Data:\n";
	cout << " Enter ID: ";
	cin >> s.id;
	cout << " Enter Nickname: ";
	cin >> s.nickname;
	cout << " Enter Line ID: ";
	cin >> s.lineId;

	cout << "\n2. Student's Contact Info:\n";

	cout << " Enter Mobile Number: ";
	cin >> s.myContact.mobile;
	cout << " Enter Home Number: ";
	cin >> s.myContact.home;
	// 3. Parent Data
	cout << "\n3. Parent Data:\n";
	cout << " Enter Parent Name: ";
	cin >> s.myParent.name;
	cout << " Enter Relationship: ";
	cin >> s.myParent.relationship;

	cout << "\n4. Parent's Contact Info:\n";
	cout << " Enter Parent Mobile: ";
	cin >> s.myParent.contact.mobile;
	cout << " Enter Parent Home: ";
	cin >> s.myParent.contact.home;
}

void displayData(Student s) {
	// แสดงข้อมูลนักศึกษา
	cout << "Student ID: " << s.id << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineId << endl;
	// แสดงเบอร์โทรนักศึกษา
	cout << "Student Mobile: " << s.myContact.mobile << endl;
	cout << "Student Home: " << s.myContact.home << endl;
	// แสดงข้อมูลผู้ปกครอง
	cout << "--------------------------------\n";
	cout << "Parent Name: " << s.myParent.name << endl;
	cout << "Relationship: " << s.myParent.relationship << endl;

	cout << "Parent Mobile: " << s.myParent.contact.mobile << endl;
	cout << "Parent Home: " << s.myParent.contact.home << endl;
	cout << "================================\n";
}
// 4. ฟังก์ชัน Main
int main() {

	Student student1;

	inputData(student1);
	displayData(student1);
	return 0;
}