#include<iostream>
using namespace std;
int specialValue(int arr[], int size);
int main()
{
    cout<<"Enter the length of the array: ";
    int length;
    cin>>length;
    int arr[length];
    cout<<"Enter the elements of the array: "<<endl;
    for(int x=0;x<length;x++)
    {
        cin>>arr[x];
    }
    int b=specialValue(arr,length);
    cout<<"Special value: "<<b;
}
int specialValue(int arr[], int size)
{
   int sp = -1;

    for (int x = 1; x <= size; x++)
    {
        int countGreaterOrEqual = 0;

        for (int l = 0; l < size; l++)
        {
            if (arr[l] >= x)
            {
                countGreaterOrEqual++;
            }
        }

        if (countGreaterOrEqual == x)
        {
            sp = x;
        }
    }

    return sp;   
}