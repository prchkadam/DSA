#include <bits/stdc++.h>
using namespace std;

int countDigits(int num){
    int count = 0;

    while(num > 0){
        num /= 10;
        count += 1;
    }

    return count;
}

int main()
{
    int num;
    cin >> num;
    int digit = countDigits(num);

    cout << digit;

    return 0;
}