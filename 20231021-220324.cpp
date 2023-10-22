#include <iostream>
using namespace std;
bool isPrime(int num) ;
unsigned  long primorial(int n);
int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    unsigned long Result = primorial(n);
    cout << Result;
    return 0;
    }
    bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
unsigned  long primorial(int n) {
    unsigned long r = 1;
    int count = 0;
    int currentNum = 2;

    while (count < n) {
        if (isPrime(currentNum)) {
            r *= currentNum;
            count++;
        }
        currentNum++;
    }
    return r;
}

