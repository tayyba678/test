#include<iostream>
using namespace std;
void possibleBonus (int a, int b);
int main(){
cout << "Enter your position: " ;
int yp,fp;
cin >> yp;
cout<< "Enter your friend's position: " ;
cin >> fp;

possibleBonus(yp, fp);
}
void possibleBonus(int a,int b)
{

if((b-a)<=6)
{
cout << "true" << endl;
}
{
if((b-a)>6)
cout << "false" << endl;
}
}