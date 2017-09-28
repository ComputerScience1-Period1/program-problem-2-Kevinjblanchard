/* Kevin Blanchard - Computer Science I - 1st period
Project - Take in data and give an output*/

// Libraries
#include <iostream>
#include <conio.h>
#include <math.h>

//Namespaces
using namespace std;



//Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//MAIN
void main() {
	//Variables
	int Height;
	float Weight;
	double Molecules;
	bool Cool = false;
	char Confused;
	int calc_1, calc_2, calc_3;

	//User Queries
	cout << "How tall is Ray in inches? ";
	cin >> Height; //int
	cout << "How much does Ray weigh to the nearest tenth of a pound? ";
	cin >> Weight; //float
	cout << "How many molecules is Ray made out of? ";
	cin >> Molecules; //double
	cout << "Is Ray cool? Y for Yes, N for No. ";
	cin >> Confused;
	if (Confused == 'Y' || Confused == 'y') {
		Cool = true;
	}

	//Answer Print out
	cout << "\n";
	cout << "You think that Ray is " << Height << " inches tall. \n";
	cout << "You think that Ray weighs " << Weight << " Pounds. \n";
	cout << "You think that Ray is made out of " << Molecules << " molecules. \n";
	cout << boolalpha << "The fact that you think Ray is cool is " << Cool << endl;

	//change values

	cout << "\n";
	cout << "Part Two : calculator \n";
	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter another number : ";
	cin >> calc_2;
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << " * " << calc_2 << " = " << calc_3 << endl;
	pause();
}

