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

    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) //i++ / i = i + 1
    {
        cout << "Masukkan Nilai Ke-" << (i + 1) << ": ";
        cin >> a[i];
    }
}
