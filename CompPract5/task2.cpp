#include <iostream>
using namespace std;

int comb(int* m, int* n);

int comb(int* m, int* n)
{

    if (*m <= 1 || *n == 0 || *n == *m)
    {
        return 1;
    }

    int m_prev = *m - 1;
    int n_prev = *n - 1;

    return comb(&m_prev, &n_prev) + comb(&m_prev, n);
}

int main()
{
    int m, n;
    cout << "Enter m and n (n <= m, m >= 0, n >= 0): ";
    cin >> m >> n;

    if (m < 0 || n < 0 || n > m)
    {
        cout << "Incorrect input!" << endl;
        return 1;
    }

    int result = comb(&m, &n);
    cout << "C(" << m << ", " << n << ") = " << result << endl;

    return 0;
}
