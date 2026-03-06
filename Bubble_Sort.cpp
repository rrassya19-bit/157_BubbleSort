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

void display()
{
    cout << "===========================" << endl;
    cout << "Elemen Array Telah Terurut" << endl;
    cout << "==========================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data Ke-" << i << ": " << a[i] << endl;
    }
}

void BubbleSort()
{
    cout << "=================" << endl;
    cout << "Hasil Setiap Pass" << endl;
    cout << "=================" << endl;

    for (int pass = 1; pass < n; pass++)
    {
        for (int j = 0; j < n - pass; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        cout << "Pass Ke - " << pass << ":\\t";
        for (int k = 0; k < n; k++)
        {
            cout << a[k] << "\t";
        }
        cout << endl;
    }
}
