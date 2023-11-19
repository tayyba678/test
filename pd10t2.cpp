#include <iostream>
using namespace std;
int howManyTimes(string arr[], int size, char word);
int main()
{
    int length;
    char word;
    cout << "Enter how many words you want to enter: ";
    cin >> length;
    string arr[length];
    for (int x = 0; x < length; x++)
    {
        cout << "Enter word " << x + 1 << ": ";
        cin >> arr[x];
    }
    cout << "Enter the letter you want to count: ";
    cin >> word;
  int l=  howManyTimes(arr, length, word);
  cout<<word<<" shows up "<<l<<" times in the data.";

}
int howManyTimes(string arr[], int size, char word)
{
    int exccedCount = 0;
    for (int x = 0; x<size ; x++)
    {
        string word1 = arr[x];
        for(int i=0;i<word1.length();i++)
        if(word1[i]==word)
        {
exccedCount++;
        }
    }
        return exccedCount;
}
