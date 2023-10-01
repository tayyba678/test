#include<iostream>
using namespace std;
void names(string nam, float pr);
int main (){
cout << "Enter the country's name: ";
string name;
cin>> name;
cout << "Enter the ticket price in dollars: $";
float a;
cin>>a;
names( name, a);

}
void names(string nam, float pr)

{
if(nam=="Pakistan")
{
float b,s;
b=pr*0.05;
s=pr-b;
cout << "Final ticket price after discount: $" <<s;
}
{
if(nam=="Ireland")
{
float b,s;
b=pr*0.1;
s=pr-b;
cout << "Final ticket price after discount: $" <<s;
}
{
if(nam=="India")
{
float b,s;
b=pr*0.2;
s=pr-b;
cout << "Final ticket price after discount: $" <<s;
}
{
if(nam=="England")
{
float b,s;
b=pr*0.3;
s=pr-b;
cout << "Final ticket price after discount: $" <<s;
}
{
if(nam=="Canada")
{
float b,s;
b=pr*0.45;
s=pr-b;
cout << "Final ticket price after discount: $" <<s;
}
}
}
}
}
}
