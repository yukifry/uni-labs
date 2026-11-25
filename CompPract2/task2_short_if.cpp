
#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	cout << "Task 2 (short form of if) CP2" << endl;
	char type;
	double x;
	double y;
	double podatok;
	double summaPodatku;
	double summaDoVidachi;

	cout << "Input x -->  ";
	cin >> x;
	cout << "Input your type of work (A, B, C) -->   ";
	cin >> type;
	if (type != 'A' && type != 'a' && type != 'B' && type != 'b' && type != 'C' && type != 'c')
	{
		cout << "Invalid type of work entered" << endl;
		return 0;
	}
	if (type == 'A' || type == 'a')
	{
		y = 100 * abs((abs(cos(2 * x))) / 1.12 - cos((3 * x) - 2) + 6.15 + 50);
		podatok = 10;
		summaPodatku = y * 10 / 100;
		summaDoVidachi = y - summaPodatku;
	}
	if (type == 'B' || type == 'b')
	{
		y = 150 * abs((sin(x) * pow(cos(x), 2) * sin(x + 1.4) / 0.85 + 7.14) + 100);
		podatok = 15;
		summaPodatku = y * 15 / 100;
		summaDoVidachi = y - summaPodatku;
	}
	if (type == 'C' || type == 'c')
	{
		y = 100 * abs(abs(sin((2 * x) - 1.5)) * 4 - 3 * sin(4 * x) + 2.38 + 135);
		podatok = 20;
		summaPodatku = y * 20 / 100;
		summaDoVidachi = y - summaPodatku;
	}

	cout << "Your credited amount:  " << y << endl;
	cout << "Tax:  " << podatok << "%  -->  " << summaPodatku << endl;
	cout << "Amount to Disbursement:   " << summaDoVidachi << endl;

	return 0;
}

