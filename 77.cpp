#include<iostream>
using namespace std;
main(){
cout<<"Enter the movie name: ";
string n;
float a,c,na,nc,p;
cin>>n;
cout<<"Enter the adult ticket price: $";
cin>>a;
cout<<"Enter the child ticket price: $";
cin>>c;
cout<<"Enter the number of adult tickets sold: ";
cin>>na;
cout<<"Enter the number of child tickets sold: ";
cin>>nc;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>p;
cout<<endl;
cout<<"Movie: "<<n<<endl;
float ta;
ta=na*a+nc*c;
cout<<"Total amount generated from ticket sales: $"<<ta<<endl;
float ch;
ch=ta*p/100;
cout<<"Donation to charity (10%): $"<<ch<<endl;
float r;
r=ta-ch;
cout<<"Remaining amount after donation: $"<<r;
}

