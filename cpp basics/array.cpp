#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[3] << "\n";

    arr[1] += 10;
    cout << arr[1] << "\n";

    float arr1 [2][2];
    cout << "Garbage value : " << arr1[2][1];
    return 0;
}

// Arrays are stores in consecutive memory location 
// If the value is not assigned, it contains garbage value.
// 2D array : [row][column]