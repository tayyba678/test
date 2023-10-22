#include <iostream>
using namespace std;
void utask2(int nu);
void vtask2(int nu);
main()
{
    cout << "Enter desired number of rows: ";
    int n;
    cin >> n;
    utask2(n);
    vtask2(n);
}
void utask2(int nu)
{
    for (int i = nu; i >=0; i--)
    {
        for (int c = 0; c <=nu; c++)
        {
            if (c >=i)
             {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
}
void vtask2(int nu){
 for (int i = nu; i >=0; i--)
    {
        for (int c = nu; c >=0; c--)
        {
            if (c <=i)
             {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
}