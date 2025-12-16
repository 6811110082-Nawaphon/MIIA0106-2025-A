// Lab 5_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int maxOfThree(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a; 
    }
    else if (b >= a && b >= c) {
        return b; 
    }
    else {
        return c; 
    }
}

int main() {
   
    int val1 = 10;
    int val2 = 15;
    int val3 = 7;

    
    int maxVal = maxOfThree(val1, val2, val3);

    
    cout << "Maximum value is: " << maxVal << endl;

    return 0;
}
