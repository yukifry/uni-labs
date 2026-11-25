

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Task 2 (full form of if) CP2" << endl;
	char type;
	double x = 0;
	double y = 0;
	double podatok = 0;
	double summaPodatku = 0;
	double summaDoVidachi = 0;

	cout << "Input x -->  ";
	cin >> x;
	cout << "Input your type of work (A, B, C) -->   ";
	cin >> type;

	if (type == 'A' || type == 'a')
	{
		y = 100 * abs((abs(cos(2 * x))) / 1.12 - cos((3 * x) - 2) + 6.15 + 50);
		podatok = 10;
		summaPodatku = y * 10 / 100;
		summaDoVidachi = y - summaPodatku;
	}
	else
	{
		if (type == 'B' || type == 'b')
		{
			y = 150 * abs((sin(x) * pow(cos(x), 2) * sin(x + 1.4) / 0.85 + 7.14) + 100);
			podatok = 15;
			summaPodatku = y * 15 / 100;
			summaDoVidachi = y - summaPodatku;
		}
		else
		{
			if (type == 'C' || type == 'c')
			{
				y = 100 * abs(abs(sin((2 * x) - 1.5)) * 4 - 3 * sin(4 * x) + 2.38 + 135);
				podatok = 20;
				summaPodatku = y * 20 / 100;
				summaDoVidachi = y - summaPodatku;                      
			}
			else
			{
				cout << "Invalid type of work entered" << endl;;
			}
		}
			
	}
		

	cout << "Your credited amount:  " << y << endl;
	cout << "Tax:  " << podatok << "%  -->  " << summaPodatku << endl;
	cout << "Amount to Disbursement:   " << summaDoVidachi << endl;

	return 0;
}


