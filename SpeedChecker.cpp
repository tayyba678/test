#include<iostream>
using namespace std;
void checkSpeed(int speed);
int main (){
cout << "Speed: ";
int sp;
cin>> sp;
checkSpeed(sp);

}
void checkSpeed(int speed)
{
if(speed<=100)
{
cout << "Perfect! You're going good.";}

if(speed>100)
{
cout << "Halt... YOU WILL BE CHALLENGED!!!";
}




}