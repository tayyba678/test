#include<iostream>
using namespace std;
main(){
cout<<"Enter Imposter Count: ";
float i,p,c;
cin>> i;
cout<<"Enter Player Count: ";
cin>> p;
c=(i/p)*100;
cout<<"Chance of being an imposter: "<<c<<"%";
}