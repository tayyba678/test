#include<iostream>
using namespace std;
main(){
cout<<"Enter the movie name: ";
string n;
int a,c,na,nc,p;
cin>>n;
cout<<"Enter the adult ticket price: $";
cin>>a;
cout<<"Enter the child ticket price: $";
cin>>c;
cout<<"Enter the number of adult ticket sold: ";
cin>>na;
cout<<"Enter the number of child ticket sold: ";
cin>>nc;
cout<<"Enter the percentage of the amount to be denoted to charity: ";
cin>>p;
cout<<endl;
cout<<"Movie: "<<n<<endl;
int ta;
ta=na*a+nc*c;
cout<<"Total amount generated from ticket sales: $"<<ta<<endl;
int ch;
ch=ta*p%;
cout<<"Donation to charity (10%): $"<<ch<<endl;
int r;
r=ta-ch;
cout<<"Remaining amount after donation: $"<<r;
}

