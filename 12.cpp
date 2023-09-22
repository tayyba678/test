#include<iostream>
using namespace std;
main(){
cout<<"Number of square meter you can paint: ";
int p,w,h,n;
cin>> p;
cout<<"Width of the single wall (in meters): ";
cin>> w;
cout<<"Height of the single wall (in meter): ";
cin>> h;
n=p/w*h;
cout<<"Number of walls you can paint: "<<n;
}
