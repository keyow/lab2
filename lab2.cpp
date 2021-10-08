#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double result = 0;
	double x = 0;
	double element = 0;
	int n = 0;

	cout << "Enter x: ";
	cin >> x;
	cout << endl;
	
	cout << setw(9) << "Accuracy" << setw(26) << "Experimental sin(x)" << setw(25) << "Theoretical sin(x)" << setw(17) << "Error" << setw(17) << "Iterations" << endl;

	for (int k = 2; k < 9; k++)
	{
		result = x;
		do
		{
			n += 1;
			element = 1 - pow(x, 2) / (pow(n, 2) * pow(M_PI, 2));
			result *= element;
		} while (abs(1 - element) >= pow(10, -k));

		cout << setw(8) << "10^-" << k << setw(26) << result << setw(25) << sin(x) << setw(17) << abs(sin(x) - result) << setw(17) << n << endl;
		n = 0;
	}

	cout << "\n\033[32mThe number of iterations increases by ~ 3.16 in each round.\033[0m" << endl;
	return 0;
}