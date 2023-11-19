#include<iostream>
using namespace std;
int countRotation(string arr[], int size);
int main()
{
    cout<<"Enter the length of the array: ";
    int length;
    cin>>length;
    string arr[length];
    cout<<"Enter the elements of the array (\"left\" or \"right\"): "<<endl;
    for(int x=0;x<length;x++)
    {
        cin>>arr[x];
    }
    int b=countRotation(arr,length);
    cout<<"Number of full rotations: "<<b;
}
int countRotation(string arr[], int size)
{
    int totalRotation=0;
    for(int l=0;l<size;l++)
    {
        if(arr[l]=="left")
        {
            totalRotation=totalRotation-90;
        }
        else if(arr[l]=="right")
        {
            totalRotation=totalRotation+90;
        }
    }
    if(totalRotation>=360)
    {
        int b=totalRotation/360;
        return b;
    }
    else 
    return 0;
}