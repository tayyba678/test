#include <iostream>
#include <string>
using namespace std;

string checkPointPosition(int h, int x, int y);

int main() {
    int h, x, y;
    cout<<"Enter height: ";
    cin >> h;
    cout<<"Enter x coordinate: ";
    cin >> x;
    cout<<"Enter y coordinate: ";
    cin >> y;

    string result = checkPointPosition(h, x, y);
    cout << result;
}
    
    string checkPointPosition(int h, int x, int y)
    {

if ((x > h && x < 2 * h && y > 0 && y < 4 * h) ||(x >= 0 && x <= 2 * h && y >= 0 && y <= h) ||(x >= h && x <= 2 * h && y >= 3 * h && y <= 4 * h)) {
        return "Inside";
    } else if ((x < 0 || x > 2 * h || y < 0 || y > 4 * h) ||
               (x > h && x < 2 * h && y > h && y < 3 * h)) {
        return "Outside";
    } else {
        return "Border";
    }
    }
