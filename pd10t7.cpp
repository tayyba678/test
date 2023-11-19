#include<iostream>
using namespace std;
bool canBeArranged(int arr[],int size);
int main()
{
    int length;
    cout<<"Enter the length of the array: ";
    cin>>length;
    int arr[length];
    cout<<"Enter the elements of the array: "<<endl;
    for(int x=0;x<length; x++)
    {
        cin>>arr[x];
    }
   bool b= canBeArranged(arr,length);
   if(b==0){
   cout<<"Cannot be arranged: "<<b;
   }
    if(b==1){
   cout<<"Can be arranged: "<<b;
   }
}
bool canBeArranged(int arr[],int size)
{
    int a=0;
    for(int l=0;l<(size-1);l++)
    {
        for(int m=l+1;m<(size-1);m++)
        {
        if(arr[l]!=arr[m])
        {
            a=1;
        }
        else
        a=0;
    }
    }
    if(a==1)
    {
        return true;
    }
    else
    return false; 
}
