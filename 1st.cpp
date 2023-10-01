#include<iostream>
using namespace std;
void IsEqual(float a, float b);
int main()
{
    cout <<"Enter the first number: ";
    int n_1,n_2;
    cin>>n_1;
    cout <<"Enter the second number: ";
    cin>>n_2;
    IsEqual(n_1,n_2);
    }
    void IsEqual(float a,float b)  
    {
    if(a==b)
    {
    cout << "true";
    }
    if(a!=b)
    {
    cout << "false";
    }
    }
