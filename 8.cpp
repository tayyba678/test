#include<iostream>
using namespace std;
main(){
cout<<"Enter vegetable price per kilogram (in coins): ";
float v,f;
float tv,tf,te;
cin>>v;
cout<<"Enter vegetables price per kilogram (in coins): ";
cin>>f;
cout<<"Enter total kilograms of vegetables: ";
cin>> tv;
cout<<"Enter total kilograms of fruits: ";
cin>> tf;
te=(v/1.94)*10+(f/1.94)*10;
cout<<"Total earnings in Rupees (Rps): "<<te;
}