#include<iostream>
using namespace std;
void Reverse (string wr);
int main()
{
cout << "Enter 'true' or 'false': " ;
string write;
cin>>write;
Reverse (write);
}
void Reverse (string wr)
{
if(wr=="true")
{
cout << "false";
}
if(wr=="false")
{
cout << "true";
}
}