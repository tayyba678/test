#include<iostream >
using namespace std;
string longest7SegmentWord(string word[]);
int main()
{
    cout<<"Enter the number of words: "<<endl;
    int num;
    cin>>num;
    string wor[num];
    for(int x=0;x<num;x++)
    {
        cin>>wor[x];
    }
    longest7SegmentWord(wor);
}
string longest7SegmentWord(string word[])
{
    string a=word[0];
    int l;
    for(l=0;l<word.length();l++)
    {
        if(word==k||word==m||word==v||word==w||word==x)
        continue;
    }
    if((word!=k||word!=m||word!=v||word!=w||word!=x)&&word.length>a)
    {
        int a=1;
    }   
    return word[l];
}