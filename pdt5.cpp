#include<iostream>
using namespace std;
int commonCharacter(string st1, string st2);
int main()
{
    string s1,s2;
    cout<<"Enter the first string: ";
    cin>>s1;
    cout<<"Enter the second string: ";
    cin>>s2; 
int a=commonCharacter(s1,s2);
cout<<"Number of common characters: "<<a;
}
int commonCharacter(string st1, string st2)
{
    int commonco=0;
      for (int i = 0; st1[i] != '\0'; ++i) {
        for (int l = 0; st2[l] != '\0'; ++l) {
            if (st1[i] == st2[l]) {
                ++commonco;
                break;
            }
        }
    }
    return commonco;
}