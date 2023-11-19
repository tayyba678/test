#include<iostream>
using namespace std;
void ascendingOrder(int arr[]);
void swap(int& a, int& b);
int main()
{
    cout<<"Enter the weights of the 10 packages: "<<endl;
    int arr[10];
    for(int l=0;l<10;l++)
    cin>>arr[l];
    ascendingOrder(arr);
    cout << "Sorted array in ascending order: [";
    for (int i = 0; i < 9; ++i) {
        cout << arr[i] << ", ";
    }
    cout << arr[9] << "]" << endl;

    return 0;
}

void ascendingOrder(int arr[])
{
    for (int x=0;x<9;x++)
    {
       int a=x;
       for(int i=x+1;i<10;i++)
       {
       if(arr[i]<arr[a])
       {
       a=i;
       }
    }
     swap(arr[x], arr[a]);
}
}
void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }