#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cin >> num;
    for (&num; num > 0; num /= 10)
    {
        int digit = num % 10;
        cout << digit << '\n';
    }

    return 0;
}