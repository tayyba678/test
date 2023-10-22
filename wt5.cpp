#include<iostream>
using namespace std;
bool isPrime(int number);
int main()
{
cout<<"Enter Number: ";
int n,t;
cin>>n;
t=isPrime(n);
cout<<t;
}
bool isPrime(int number)
{
int a;
if(number%2!=0||number%3!=0)
{
a= 1;
}if(number%2==0||number%3==0)
{
a= 0;
}
return a;
}