//           0 1      1010 -- 2 2 
// 11000100   5 3 ---> 10101000 
// 0100111100 5 5--- >  1010101010 

#include <iostream>
using namespace std;

int main() {
    int x1;
    cin >> x1;

    for (int x = 0; x < x1;x++) {
        int n;
        cin >> n;
        string S;
        cin >> S;

        int zeroes = 0;
        int ones = 0;
        for (int i = 0; i < n;i++) {
            if (S[i] == '0') {
                zeroes++;
            }
            if (S[i] == '1') {
                ones++;
            }
        }

        int minimum = min(ones, zeroes);

        //3  
        int answer = minimum - 1;
        // cout << zeroes;
        // cout << ones;
        if (answer < 0) {
            answer = 0;
        }
        cout << answer << endl;
        // cout << minimum;
    }
}