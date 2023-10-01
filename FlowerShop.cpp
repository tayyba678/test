#include<iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);
int main(){
cout << "Red Rose: ";
int red,whi,tul;
cin >> red;
cout << "White Rose: ";
cin >> whi;
cout << "Tulips: ";
cin >> tul;



flowerShop(red, whi, tul);
}
void flowerShop(int redRose, int whiteRose, int tulip)
{
float a;
a=redRose*2.00+whiteRose*4.10+tulip*2.50;
cout << "Original Price: $"<<a <<endl;



if(a>200)
{
float p;
p=a*0.2;
float m=a-p;
cout << "Price after Discount: $"<<m ;
}
if(a<=200)
{
cout << "No discount applied." ;
}
}
