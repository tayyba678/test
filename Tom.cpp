#include<iostream>
using namespace std;
void pet(int holidays);
int main (){
cout << "Holidays: ";
int holi;
cin >> holi;
pet(holi);
}
void pet(int holidays)
{
int n,w;
w=365-holidays;
n=w*63+holidays*127;
int d,c,t;
t=30000-n;
d=t/60 ;
c=((t-d*60));
{
if(holidays<=63)
{
cout << "Tom sleeps well" << endl;
cout <<d <<" hours and " <<c<<" minutes less for play" << endl;
}
if(holidays>63)
{
cout << "Tom will run away" << endl;
cout <<-d <<" hours and " <<-c<<" minutes for play" << endl;
}
}
}