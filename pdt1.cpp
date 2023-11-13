#include<iostream>
using namespace std;
bool isLengthEven(string word);
main()
{
    string words;
    cout<<"Enter a String: ";
    cin>>words;
  cout<<isLengthEven(words);
}
bool isLengthEven(string word)
{
    int l,x;
    for( x=0;word[x]!='\0';x++)
    {
         l=word[x];
    }
    if(x%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}