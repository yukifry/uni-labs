#include <iostream>
#include <cmath>  

using namespace std;

int main()
{
    double arg_a;
    double eps = 0.000001;
    double Summ = 0.;
    double n_main;
    double term;
    int n = 1;

    cout << "Enter your a (note! (0 <= a <= 2)): ";
    cin >> arg_a;

    if (arg_a < 0 || arg_a > 2)
    {
        cout << "Error! Value of a must be in the range [0; 2]." << endl;
        return 0;
    }


    n_main = arg_a - 1;
    term = n_main / n;

    while (abs(term) >= eps)
    {
        Summ += term;
        n++;

        n_main = -n_main * (arg_a - 1);

        term = n_main / n;
    }

    cout << "Value of the series Summ = " << Summ << endl;
    cout << "Standard function log(arg_a) = " << log(arg_a) << endl;
    cout << "Difference (error) = " << abs(Summ - log(arg_a)) << endl;

    return 0;
}