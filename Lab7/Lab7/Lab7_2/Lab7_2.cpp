// TODO: ??????? score, address ??? pointer
#include <iostream>
using namespace std;
int main() {
	int score = 50;
	int* ptr = &score;
	// TODO
	cout << score << endl;
	cout << *ptr << endl;
	// Address of score
	cout << "Address of score: " << &score << endl;
	cout << "value of ptr: " << ptr << endl;
	cout << "Address of ptr: " << &ptr << endl;



	return 0;
}