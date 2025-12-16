#include <iostream>
using namespace std;


const double PI = 3.1416;



double circleArea(double radius) {
    return PI * radius * radius;
}


double rectArea(double width, double height) {
    return width * height;
}

int main() {
	int r, w, h;
    
	cout << "Enter radius of the circle: ";
    cin >> r;
	cout << "Enter width  of the rectangle: ";
    cin >> w;
		cout << "Enter height of the rectangle: ";
	cin >> h;
    

    
    cout << "Circle Area = " << circleArea(r) << endl;
    cout << "Rectangle Area = " << rectArea(w, h) << endl;

    return 0;
}