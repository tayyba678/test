#include<iostream>
using namespace std;
main(){
cout<<"Enter initial velocity (m/s): ";
int vi,a,t,vf;
cin>> vi;
cout<<"Enter acceleration (m/s^2): ";
cin>>a;
cout<<"Enter time (s): ";
cin>>t;
vf=(a*t)+10;
cout<<"Final velocity (m/s): "<<vf;
}
