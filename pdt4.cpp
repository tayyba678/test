#include<iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n);

int main() {
    int size, time;
    cout << "Enter the size of Array: ";
    cin >> size;
    int num[size];
    for (int x = 0; x < size; x++) {
        cout << "Enter Element " << x + 1 << ": ";
        cin >> num[x];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> time;
    evenOddTransform(num, size, time);
    return 0;
}

void evenOddTransform(int arr[], int size, int n) {
    cout << "[";
    for (int l = 0; l < size; l++) {
        if (arr[l] % 2 == 0) {
            int b = arr[l] - n * 2;
            cout << b;
        }
        if (arr[l] % 2 != 0) 
            int c = arr[l] + n * 2;
            cout << c;
        }

        if (l < size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}
