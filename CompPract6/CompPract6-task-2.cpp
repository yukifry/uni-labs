#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    int k;

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

    cout << "Input the index of the element to delete (from 1 to " << n << "): " << endl;
    cin >> k;

    if (k < 1 || k > n)
    {
        cout << "Invalid index" << endl;
        return 0;
    }

    for (int i = k - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n = n - 1;

    cout << "New array:" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
