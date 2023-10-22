#include<iostream>
using namespace std;
int main()
{int number ,day1 ,treat=0, t1,t2 ,untreat;
cout<<"Enter Number of days you visited hospital: ";
cin>>number;
for(int m=1; m<=number; m++){
cout<<"Number of patients who visited hospital on Day "<<m<<": ";
cin>> day1;
}
for(int j=1;j<=number;++j)
{
if(day1 <= 7) {
          treat =treat+ day1;
          untreat =0;        } 
        if (day1>7) {
            treat =treat+7;
            untreat =untreat+ day1 - 7;
        }
        
        }
        
   cout << "Treated Patients: " << treat << endl;
    cout << "Untreated Patients: " << untreat << endl;

    return 0;

}