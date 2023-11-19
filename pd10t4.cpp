#include<iostream>
using namespace std;
int volume(int arr[],int numberOfBoxes);
int main()
{
    int nob;
    cout<<"Enter the number of boxes: ";
    cin>>nob;
    int arr[nob*3];
    cout<<"Enter the dimensions of the boxes (length, width, height): "<<endl;
    for(int i=0;i<(nob*3);i++)
    {
        cin>>arr[i];
    }
    int b=volume(arr,nob);
    cout<<"Total volume of all boxes: "<<b;
}
int volume(int arr[],int numberOfBoxes)
{
   int sum=0;
    for(int i=0;i<(numberOfBoxes*3);i=i+3)
    {
        int l=arr[i];
        int w=arr[i+1];
        int h=arr[i+2];
        sum=sum+(l*w*h);
    }
return sum;
}