#include <iostream>

using namespace std;

int main()
{
    double leftBorder = 0;   
    double rightBorder = 2;        
    double i = 0.0001;     
    double S = 0;        
    double f1, f2;

    for (double x = leftBorder; x < rightBorder; x += i)
    {
        f1 = -2 * x * x + 3 * x + 6;
        f2 = x + 2;
        S += (f1 - f2) * i;
    }

    cout << "Figure area S = " << S << endl;

    return 0;
}