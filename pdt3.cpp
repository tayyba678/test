#include<iostream>
using namespace std;
bool areAllElementsIdentical(string special[], int size);
int main() {
    int siz;
    cout << "Enter the size of Array: ";
    cin >> siz;

    string charac[siz];
    for (int x = 0; x < siz; x++) {
        cout << "Enter Element " << x + 1 << ": ";
        cin >> charac[x];
    }
   cout<< areAllElementsIdentical(charac,siz);
    return 0;
}
bool areAllElementsIdentical(string special[], int size) {
    string sp = special[0];
    for (int l = 1; l < size; l++) {
        if (sp != special[l]) {
            return false;
        }
    }
    return true;
}
