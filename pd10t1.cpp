#include<iostream>
using namespace std;
int runsExceed(int runs[],int size);
int main()
{
    int noOfSaturdays;
    cout<<"Enter the number of Saturdays: ";
    cin>>noOfSaturdays;
    int runs[noOfSaturdays];
    for(int x=0;x<noOfSaturdays;x++)
    {
        cout<<"Enter miles run for Saturday "<<x+1<<": ";
        cin>>runs[x];
    }
       int a=runsExceed(runs,noOfSaturdays);
       cout<<"Total progress days: "<<a;
}
int runsExceed(int runs[],int size)
{
    int CountExceed=0;
    for(int i=0;i<(size-1);i++)
    {
        if(runs[i+1]>runs[i])
        {
            CountExceed=CountExceed+1;
        }
    
}
return CountExceed;
}