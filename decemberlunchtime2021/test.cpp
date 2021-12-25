#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; //4
    int myarr[n]; //myarr[4]  
    for (int i = 0;i < n;i++)
    {
        cin >> myarr[i]; //myarr[0] = 11 myarr[1]=12 myarr[2]= 13 myarr[3]=14 
    }

    for (int i = 0;i < n;i++)
    {
        cout<<myarr[i];
    }


    // 5 --  3 4 4 1 2
    // 4 4 3 2 1
    // (arr[0] - arr[n-1])*arr[1]
    // (arr[n-1] - arr[0])*arr[n-2]

}