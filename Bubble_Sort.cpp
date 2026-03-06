#include <iostream>
using namespace std;

int a[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Panjan Array: ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "Error :Maksimal Input Array Adalah 20\n" << endl;
        }
    }
}