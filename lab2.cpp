#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	double accuracy;
	double result;
	double x;
	double element;
	int n = 0;

	cout << "Enter accuracy: ";
	cin >> accuracy;
	cout << endl;
	cout << "Enter x: ";
	cin >> x;
	cout << endl;

	result = x;
	do
	{
		n += 1;
		element = 1 - pow(x, 2) / (pow(n, 2) * pow(M_PI, 2));
		result *= element;
	} while (abs(1 - element) >= accuracy);

	cout << "[Experimental] sin(x) = " << result << endl;
	cout << "[Theoretical] sin(x) = " << sin(x) << endl;

	return 0;
}