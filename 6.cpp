#include<iostream>
using namespace std;
main(){
cout<<"Enter the size of the fertilizer bag in pounds: ";
float s,c,b,p,sf;
cin>> s;
cout<<"Enter the cost of the bag: $";
cin>>c;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>> b;
p=c/s;
cout<<"Cost of fertilizer per pound: $"<<p<<endl;
sf=c/b;
cout<<"Cost of fertilizing per square foot: $"<<sf;
}
