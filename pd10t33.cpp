#include <iostream>
using namespace std;
void cycle(int arr[],int size, int length);
bool isRpeatingCycle(int length);
int main()
{
    int length,size;
    cout<<"Enter the length of the array: ";
    cin>>length;
    int arr[length];
    cout<<"Enter the elements of the array: "<<endl;
    for(int x=0;x<length;x++)
    {
        cin>>arr[x];
    }
    cout<<"Enter the length of the cycle: ";
    cin>>size;
    if(length<size){
        cout<<"Output: 1";
        return 0;
    }
    cycle(arr,length,size);
   return 0;
}
void cycle(int arr[],int size, int length)
{
    int a=1;
    for (int i = 0; i < size - length; i++) {
        if (arr[i] != arr[i + length]) {
            a = 0;
            break; 
}
    }
 bool b=isRpeatingCycle(a);
  cout<<"Output: "<<b;
}
bool isRpeatingCycle(int length)
{
    return (length == 1);
}