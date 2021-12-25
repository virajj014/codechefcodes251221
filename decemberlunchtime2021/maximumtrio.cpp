#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1;
    cin >> x1;
    for (int x = 0;x < x1;x++) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0;i < N;i++)
        {
            cin >> A[i];
        }

        sort(A, A + N);
        int i = N - 1;
        int j = 0;
        int k = N - 2;

        cout << (A[i] - A[j]) * A[k] << endl;
    }
}