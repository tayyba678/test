#include<iostream>
#include<limits>
using namespace std;
void reverseWords(string arr[],int size);
int main()
{
    const int maxsize=4;
    string arr[maxsize];
    cout<<"Enter a string: ";
    for(int x=0;x<maxsize;x++)
    {
    cin>>arr[x];
    
    }
    reverseWords(arr,maxsize);
}
void reverseWords(string arr[],int size)
{
    cout<<"Reversed string: ";
    for(int l=3;l>=0;l--)
    {
        cout<<arr[l]<<" ";
    }
}