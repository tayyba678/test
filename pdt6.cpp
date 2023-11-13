#include<iostream>
using namespace std;
int coloringTime(string cols[], int size);
int main() {
    int siz,a;
    cout << "Enter the size of Array: ";
    cin >> siz;

    string charac[siz];
    for (int x = 0; x < siz; x++) {
        cout << "Enter Element " << x + 1 << ": ";
        cin >> charac[x];
    }
 a=coloringTime(charac,siz);  
 cout<<"Time to color: "<<a+2<<" seconds";
}  
int coloringTime(string cols[], int size)
{
    int swTime = 1,a=0,b=0; 
    int colTime = 2;  
    int totTime = 0;

    for (int i = 1; i < size; i++) {
        if (cols[i] != cols[i - 1])  {
           a=a+ swTime;
        }
        b=b+colTime;
        totTime= a+b;
    }
    return totTime;
}
