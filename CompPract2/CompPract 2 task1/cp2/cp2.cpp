

#include <iostream>
#include <math.h>


using namespace std;

int main()
{
	double y;
	double x;
	float a = 18.5;
	cout << "Your x --> ";
	cin >> x;

	if (x <= 1)
	{
		y = pow(sin(sqrt(abs(a * x))), 2);
		cout << "y -->  " << y;
	}
	else
	{
		y = log10(x + 1);
		cout << "y -->  " << y;
	}
	
}

