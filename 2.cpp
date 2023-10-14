#include<iostream>
using namespace std;
string stuna(string n);
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
float c;
main()
{
string name,q;
float EM,MM,CM,SM,BM;
cout<<"Enter student name: ";
cin>> name;
cout<<"Enter marks for English: ";
cin>>EM;
cout<<"Enter marks for Maths: ";
cin >>MM;
cout<<"Enter marks for Chemistry: ";
cin >>CM;
cout<<"Enter marks for Social Science: ";
cin >>SM;
cout<<"Enter marks for Biology: ";
cin >>BM;
stuna(name);
c=calculateAverage(EM,MM,CM,SM,BM);
cout<<"Percentage: "<<c<<"%"<<endl;
q=calculateGrade(c);
cout<<"Grade: "<<q;
}
string stuna(string n)
{
cout<<"Student Name: "<<n<<endl;
}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{

float a,b;
a=marksEnglish+marksMaths+marksChemistry+ marksSocialScience+marksBiology;
b=a/500;
c=b*100;
return c;
}
string calculateGrade(float average)
{
string b;
if(average<=100 && average>=90)
{
b="A+";
}
if(average<90 && average>=80)
{
b="A";
}
if(average<80 && average>=70)
{
b="B+";
}
if(average<70 && average>=60)
{
b="B";
}
if(average<60 && average>=50)
{
b="C";
}
if(average<50 && average>=40)
{
b="D";
}
if(average<30)
{
b="F";
}
return b;
}










