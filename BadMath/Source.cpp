#include <iostream>
#include <iomanip>
using namespace std;

const int AMT_OF_NUMS = 3;

float average(float n1, float n2, float n3)
{
	float avg = 0;

	avg = ((n1 + n2 + n3) / AMT_OF_NUMS);

	return avg;
}

int main()
{
	float n1 =0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: ";
	cin >> n1;
	cout << "Second number: ";
	cin >> n2;
	cout << "Third number: ";
	cin >> n3;

	float a = average(n1, n2, n3);

	cout << setprecision(2) << fixed << "The average is " << a << endl;

	return 0;
}