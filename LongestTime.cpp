#include<iostream>
using namespace std;
void longestTime(float m,float h);
int main(){
cout << "Enter the number of hours: ";
float mi, ho;
cin >> ho;
cout << "Enter the number of minutes: ";
cin >> mi;
longestTime (mi,ho);
}
void longestTime(float m,float h)
{
if((m/60)>h)
{
cout <<m;
}

if((m/60)<h)
{
cout <<h;
}

}