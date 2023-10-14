#include<iostream>
using namespace std;
string serviceCode(char a);
float minutes(char d,int mi, string k);

main()
{
    string k;
char s,t;
int m;
float n;
cout<<"Enter the service code (R/r for regular, P/p for premium): ";
cin>>s;
cout<<"Enter the number of minutes used: ";
cin >>m;
k=serviceCode(s);
cout<<"Service Type: "<<k<<endl;
if(k=="Premium")
{
cout<<"Enter time of thr call (D/d for day, N/n for night): ";
cin>>t;
}
cout<<"Total Minutes used: "<<m<<endl;
n=minutes(t,m,k);
cout<<"Amount Due: $"<<n;
}
string serviceCode(char a)
{
string h;
if(a=='P'||a=='p')
{
h="Premium";
}
if(a=='R'||a=='r')
{
h="Regular";
}
return h;
}
float minutes(char d,int mi,string k)
{
float u;
if(k=="Premium")
{
if(d=='D'||d=='d')
{
    if(mi<=50)
    {
        u=10.0;
    }
if(mi>75)
{
u=mi*0.10;
}
}
if(d=='N'||d=='n')
{
if(mi>100)
{
u=mi*0.05;
}
}
return u;
}
}


