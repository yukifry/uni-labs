#include <iostream>
using namespace std;

int** createMatrix(int n)
{
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
    return a;
}

void deleteMatrix(int** a, int n)
{
    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;
}

void input(int** a, int n)
{
    cout << "Input elements of the matrix:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

void output(int** a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}


bool findOrder(int** a, int n, int row, int order[], bool used[])
{
    if (row == n)
        return true;

    for (int j = 0; j < n; j++)
    {
        if (!used[j] && a[row][j] != 0)
        {
            used[j] = true;
            order[row] = j;
            if (findOrder(a, n, row + 1, order, used))
                return true;
            used[j] = false;    
        }
    }
    return false;
}

void permuteColumns(int** a, int n, int order[])
{
    int** b = createMatrix(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            b[i][j] = a[i][order[j]];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = b[i][j];

    deleteMatrix(b, n);
}

int main()
{
    int n;

    cout << "Input size of the matrix n" << endl;
    cin >> n;

    if (n < 1)
    {
        cout << "Invalid size" << endl;
        return 0;
    }

    int** a = createMatrix(n);
    int* order = new int[n];
    bool* used = new bool[n];

    input(a, n);

    cout << "Original matrix:" << endl;
    output(a, n);

    for (int j = 0; j < n; j++)
        used[j] = false;

    if (findOrder(a, n, 0, order, used))
    {
        permuteColumns(a, n, order);
        cout << "New matrix (diagonal elements are non-zero):" << endl;
        output(a, n);
    }
    else
    {
        cout << "This is not possible: diagonal elements cannot be made non-zero" << endl;
    }

    delete[] order;
    delete[] used;
    deleteMatrix(a, n);

    return 0;
}
