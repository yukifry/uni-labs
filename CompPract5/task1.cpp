#include <iostream>
#include <cmath>
using namespace std;

double sqrtSeries(double value, double eps = 0.00001);

double sqrtSeries(double value, double eps)
{
    double y_prev = 1;
    double y_curr = 0.5 * (y_prev + value / y_prev);

    while (fabs(y_curr - y_prev) >= eps)
    {
        y_prev = y_curr;
        y_curr = 0.5 * (y_prev + value / y_prev);
    }

    return y_curr;
}

int main()
{
    double xn = -2, xk = 2, xs = 0.5;
    double y, st, err;

    cout << "x\t\ty (series)\ty (std)\t\terror" << endl;
    cout << "-------------------------------------------------------------" << endl;

    for (double x = xn; x <= xk; x += xs)
    {
        bool flag = true;

        if (x >= 1 && x <= 2)
        {
            double arg = 15.0 - x * x;
            y = sqrtSeries(arg);
            st = sqrt(arg);
            err = fabs(st - y);
        }
        else if (x >= -1 && x < 1)
        {
            double arg = x + x * x;
            if (arg <= 0)
            {
                flag = false;
            }
            else
            {
                y = 1 / sqrtSeries(arg);
                st = 1 / sqrt(arg);
                err = fabs(st - y);
            }
        }
        else
        {
            flag = false;
        }

        if (flag)
        {
            cout << x << "\t\t" << y << "\t\t" << st << "\t\t" << err << endl;
        }
        else
        {
            cout << x << "\t\tnot defined" << endl;
        }
    }

    return 0;
}
