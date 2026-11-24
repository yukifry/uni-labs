#include <iostream>

using namespace std;

int main()
{
    int Summ = 0;

    for (int i = -10; i <= 0; i++)
    {
        if (i == -10)
        {
            continue;
        }

        if (i < 0)
        {
            Summ += i;
        }
    }
    cout << " sum of negative numbers: Summ = " << Summ  << endl;

    return 0;
}