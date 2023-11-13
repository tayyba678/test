#include <iostream>
using namespace std;
string containsSeven(int numbers[], int size);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int num[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter Element " << x + 1 << ": ";
        cin >> num[x];
    }
    cout << containsSeven(num, size) << endl;
}
string containsSeven(int numbers[], int size)
{
    int a;
    for (int l = 0; l<size; l++)
    {
        if (numbers[l] % 10 == 7)
        {
            a = 1;
        }
    }
    if (a == 1)
    {
        return "Boom!";
    }
    else
    {
        return "there is no 7 in the array";
    }
}