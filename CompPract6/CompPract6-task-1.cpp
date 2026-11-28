#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    int tmp;
    int comparisons = 0;
    int swaps = 0;

    cout << "Input number of elements (<=100)" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Initial array:" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            comparisons++;
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                swaps++;
            }
        }
    }

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "Number of comparisons: " << comparisons << endl;
    cout << "Number of swaps: " << swaps << endl;

    return 0;
}
