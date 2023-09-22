#include<iostream>
using namespace std;
main(){
cout<<"Number of minutes: ";
int m,s,t;
cin>> m;
cout<<"Frames per seconds: ";
cin>> s;
t=m*60*s;
cout<<"Total number of Frames: "<<t;
}