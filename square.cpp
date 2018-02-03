#include <iostream>
using namespace std;

double Square(double);

int main(int argc, char** argv)
{
	int number;
	int pause;
	cout << "Write a number" << endl;
	cin >> number;
	cout << "The result is: " << Square(number) << endl;

	return 0;
}

double Square(double number)
{
	return number * number;
}
