#include<iostream>
using namespace std;
void amplify(int n);
int main()
{
    cout<<"Enter the number to Amplify: ";
    int nu;
    cin>> nu;
    amplify(nu);
    }
    void amplify(int n)
    {
        for(int i=1;i<=n;i++)
        {
              if(i%4==0)
            {
            if(i<n){
                cout<<i*10<<", ";}
                if(i==n){
               cout<<i*10<<" ";}
            }
            
        if(i%4!=0)
        {if(i<n){
                cout<<i<<", ";}
                if(i==n){
            cout<<i<<" ";}
        }
    }
    }