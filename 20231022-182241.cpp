#include<iostream>
using namespace std;
int triangle(int n);
int main()
{
cout<<"Enter number of Triangle: ";
int nu,tri;
cin>> nu;
tri=triangle(nu);
cout<<"Dots in the Triangle: "<<tri;
}
int triangle(int n)
{
    n=(n*(n+1))/2;

return n;
}