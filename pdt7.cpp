#include<iostream>
using namespace std;
void convertPINToDance(string pin);
int main() {
   cout<<"Enter your PIN (4 digits): ";
   string word;
   cin>>word;
      convertPINToDance(word);
}
void convertPINToDance(string pin)
{
    const char* moves[]= {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
 
    if(pin.length()!=4|| !isdigit(pin[0]) || !isdigit(pin[1]) || !isdigit(pin[2]) || !isdigit(pin[3])) {
        cout << "Invalid input." << endl;
        return;
    }
       for (int i = 0; i < 4; i++) {
        int numer= pin[i] - '0';
    int sum = numer + i;
     int index = sum % 10;
        cout << moves[index];
        if (i < 3) {
            cout << ", ";
        }
    }
    cout << endl;
}



