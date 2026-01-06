#include <iostream>
using namespace std;
struct Address {
	int number;
	char road[20];
	char district[20];
	char province[20];
	// TODO: (ถ้าต้องการเพิ่ม) เช่น postcode[6]
	char postcode[6];
};
struct Phone {
	char home[10];
	char mobile[10];
};
struct Student {
	char id[9];
	char name[20];
	char surname[20];
	// TODO:
	Address address;
	Phone phone;
};
int main() {
	Student s1;
	// TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
	cout << "Enter Student Information:\n";
	cout << "ID: "; cin >> s1.id;
	cout << "Name: "; cin >> s1.name;
	cout << "Surname: "; cin >> s1.surname;
	cout << "Address - House Number: ";
	// TODO 3) cin >>
	cin >> s1.address.number;
	cout << "Address - Road: ";
	// TODO 3) cin >>
	cin >> s1.address.road;
	cout << "Address - District: ";
	// TODO 3) cin >>
	cin >> s1.address.district;
	cout << "Address - Province";
		// TODO 3) cin >>
		cin >> s1.address.province;
		cout << "Phone - Home: ";
	// TODO 3) cin >>
		cin >> s1.phone.home;
	cout << "Phone - Mobile: ";
	// TODO 3) cin >>
	cin >> s1.phone.mobile;
	cout << "\n===== Output =====\n";
	//// TODO 4): แสดงผลข้อมูลทั้งหมด (รวม address และ phone)
	cout << "ID: " << s1.id << "\n";
	cout << "Name: " << s1.name << "\n";
	cout << "Surname: " << s1.surname << "\n";
	cout << "Address:\n";
	cout << "  House Number: " << s1.address.number << "\n";
	cout << "  Road: " << s1.address.road << "\n";
	cout << "  District: " << s1.address.district << "\n";
	cout << "  Province: " << s1.address.province << "\n";
	cout << "Phone:\n";
	cout << "  Home: " << s1.phone.home << "\n";
	cout << "  Mobile: " << s1.phone.mobile << "\n";

	return 0;
}