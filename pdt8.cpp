#include<iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped);
main()
{
    string phra,actphra;
    cout<<"Enter the correct phrase: ";
    cin>>phra;
    cout<<"Enter what you actually typed: ";
    cin>>actphra;
   cout<< findBrokenKeys(phra,actphra);
}
string findBrokenKeys(string correctPhrase, string actualTyped)
{
   string brokenKeys = "";
    for (int i = 0; i < correctPhrase.length(); i++) {
        char typedChar = actualTyped[i];
  bool isAlreadyBroken = false;
        for (int j = 0; j < brokenKeys.length(); j++) {
            if (brokenKeys[j] == typedChar) {
                isAlreadyBroken = true;
                break;
            }
        }
        if (!isAlreadyBroken && correctPhrase[i] != typedChar) {
            brokenKeys += typedChar;
        }
    }
    return brokenKeys;
}

