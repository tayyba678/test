#include<iostream>
using namespace std;
main(){
cout<<"Enter Initial Velocity (m/s): ";
float vi,a,t,vf;
cin>> vi;
cout<<"Enter Acceleration (m/s^2): ";
cin>>a;
cout<<"Enter Time (s): ";
cin>>t;
vf=(a*t)+vi;
cout<<"Final Velocity (m/s): "<<vf;
}
