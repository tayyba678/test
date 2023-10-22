#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int car;
    cout <<"Enter the count of cargo for transportation: ";
    cin >> car;

    int m = 0,t= 0,b= 0,tc= 0;

    for (int i = 1; i <= car; i++) {
        int ton;
        cout <<  "Enter the tonnage of cargo "<<i<<": " ;
             cin >> ton;
        tc += ton;

        if (ton <= 3) {
            m+= ton;
        } else if (ton <= 11) {
            t += ton;
        } else {
            b+= ton;
        }
    }

    double averPrice = (m* 200.0 + t * 175.0 + b * 120.0) / tc;
    double mPercentage = (m/ static_cast<double>(tc)) * 100;
    double truckPercentage = (t/ static_cast<double>(tc)) * 100;

    cout << fixed;
    cout << setprecision(2);
    cout << averPrice << endl;
    cout << mPercentage << "%" << endl;
    cout << truckPercentage << "%" << endl;
    cout << 100.00 - (mPercentage + truckPercentage) << "%" << endl;  // Percentage of cargo transported by train

    return 0;
}
