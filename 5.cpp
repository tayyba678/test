#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string day, double quantity);
main(){
    string f,d;
    float q;
    float o;
    cout<<"Fruits: ";
    cin>> f;
    cout<<"Day: ";
    cin >>d;
    cout<<"Quantity: ";
    cin>> q;
    o=calculateFruitPrice(f,d,q);
    cout<<o;
}
float calculateFruitPrice(string fruit, string day, double quantity)
{
    float pr,pri;
    if(fruit=="banana"&&day=="Sunday")
    {
        pr=2.70;
        pri=pr*quantity;
    }
     if(fruit=="banana"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=2.50;
        pri=pr*quantity;
    }
    if(fruit=="apple"&&day=="Sunday")
    {
        pr=1.25;
        pri=pr*quantity;
    }
     if(fruit=="apple"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=1.20;
        pri=pr*quantity;
    }
    if(fruit=="orange"&&day=="Sunday")
    {
        pr=0.90;
        pri=pr*quantity;
    }
     if(fruit=="orange"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=0.85;
        pri=pr*quantity;
    }
    if(fruit=="grapefruit"&&day=="Sunday")
    {
        pr=1.60;
        pri=pr*quantity;
    }
     if(fruit=="grapefruit"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=1.45;
        pri=pr*quantity;
    }
    if(fruit=="kiwi"&&day=="Sunday")
    {
        pr=3.00;
        pri=pr*quantity;
    }
     if(fruit=="kiwi"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=2.70;
        pri=pr*quantity;
    }
    if(fruit=="pineapple"&&day=="Sunday")
    {
        pr=5.60;
        pri=pr*quantity;
    }
     if(fruit=="pineapple"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=5.50;
        pri=pr*quantity;
    }
    if(fruit=="grapes"&&day=="Sunday")
    {
        pr=4.20;
        pri=pr*quantity;
    }
     if(fruit=="grapes"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"))
    {
        pr=3.85;
        pri=pr*quantity;
    }

return pri;
}

