// Emerson Racca
// 09/20/21
// Lab 5b - Table of Function Values

/*
Take your math function from lab3a [f(x) = 2x^2-3x-4] and create a table for the given x-values.

f(x) = -3x+5
 x   |   y
------------
-2   |   11
-1   |   8
 0   |   5
 1   |   2
 2   |   -1
 3   |   -4

2. Ask the user if he would like to make another table (game loop).

3. **Let the user choose the beginning and ending x-values for the next run.
*/

#include<iostream>
using namespace std;

int main() {
	double xmin = -2;
	double xmax = 3;
	double y;
	char again;

	do {
		cout << "f(x) = 2x^2-3x-4\n\n";
		cout << "x\t|\t y\n";
		cout << "--------------------\n";
		for (xmin; xmin <= xmax; xmin++) {
			y = 2 * xmin * xmin - 3 * xmin - 4;
			cout << xmin << "\t|\t" << y << endl;
		}

		cout << "\n\nCreate another table? (y or n): ";
		cin >> again;

		if (again == 'y') {
			cout << "\nWhat is the beginning x value? ";
			cin >> xmin;
			cout << "What is the ending x value? ";
			cin >> xmax;
			cout << endl << endl;
		}
	}
	while (again == 'y');

	return(0);
}
