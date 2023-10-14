#include<iostream>
using namespace std;
string activity(string te, string hu);
main()
{
	cout << "Enter temperature (warm or cold): ";
	string tem, hum;
	string b;
	cin >> tem;
	cout << "Enter humidity (dry or humid): ";
	cin >> hum;
	b= activity(tem, hum);
	cout <<"Recommended activity: "<< b;
}
string activity(string te, string hu)
{
string a;
if(te=="warm"&&hu=="dry")
{
	a = "Play tennis";
}
if (te == "warm" && hu == "humid")
{
	a = "Swim";
}
if (te == "cold" && hu == "dry")
{
	a = "Play basketball";

}
if (te == "cold" && hu == "humid")
{
	a = "Watch TV";
}
return a;
}