#include<iostream>
using namespace std;
void tpChecker(int people, int tp);
int main(){
cout << "Number of people in the household: " ;
int n,t;
cin >> n;
cout << "Number of rolls of TP: ";
cin >> t;
tpChecker(n,t);
}

void tpChecker(int people, int tp)
{
int m,n,l;
m=people*57;
n=tp*500;
l=n/m;
if(l<14)
{
cout << "Your TP will only last "<<l<<" days, buy more!"<< endl;
}
if(l>=14)
{
cout << "Your TP will last "<<l<<" days, no need to panic!" <<endl;
}
}
