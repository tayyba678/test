#include<iostream>
using namespace std;
void task1(int nu);
main()
{
    cout<<"Enter desired number of rows: ";
    int n;
    cin>>n;
    task1(n);
}
void task1(int nu)
{
    for(int i=1;i<=nu;i++)
    {
        for(int c=nu;c>=i;c--)
     {
        cout<<"*";
     }   
     cout<<endl;
    }
}