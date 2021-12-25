#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
    int x, y, z;
    cin >> x >> y >> z;
    int sumxy = x + y;
    if (sumxy < z) {
        cout << "PLANEBUS";
    }
    if(sumxy == z) {
        cout << "EQUAL";
    }
    else {
        cout << "TRAIN";
    }
    cout << endl;
    }
}