

#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Task 3 CP2" << endl;

    cout << "Car models:" << endl;
    cout << "1 - Porsche 911 Carrera" << endl;
    cout << "2 - Ariel Atom" << endl;
    cout << "3 - Ford Mustang GT" << endl;
    cout << "4 - Hyundai Tucson" << endl;
    cout << "Enter the model number: ";
    cin >> n;

    switch (n)
    {
    case 1:
    {
        cout << "Porsche 911 Carrera" << endl;
        cout << "Year of release: 2022" << endl;
        cout << "Price: $101,200" << endl;
        break;
    }
    case 2:
    {
        cout << "Ariel Atom" << endl;
        cout << "Year of release: 2015" << endl;
        cout << "Price: $70,250" << endl;
        break;
    }
    case 3:
    {
        cout << "Ford Mustang GT" << endl;
        cout << "Year of release: 2021" << endl;
        cout << "Price: $14,200" << endl;
        break;
    }
    case 4:
    {
        cout << "Hyundai Tucson" << endl;
        cout << "Year of release: 2022" << endl;
        cout << "Price: ~$22,914" << endl;
        break;
    }
    default:
        cout << "Model with such number does't exist" << endl;
    }
 
    return 0;
}


