#include <bits/stdc++.h>
using namespace std;

int main()
{
    // For integer
    int x = 10;
    // For longer range of integer
    long y = 10;
    // For longest range of integer
    long long z = 10;

    // For decimal number
    float a = 4.5;
    // For larger range of decimal
    double b = 5.8;
    // For longest range of decimal
    long double c = 5;

    cout << x << '\n'
         << y << '\n'
         << z << '\n'
         << a << '\n'
         << b << '\n'
         << c << '\n';

    // String is identified by cin before a space : example
    string st1;
    cin >> st1;
    cout << st1 << '\n';

    string st2;
    cin >> st2;
    cout << st1 << ' ' << st2 << '\n';

    // getline = this is identified only till the line break or enter key
    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);
    cout << line1 << line2 << '\n';
    // this doesn't require endl


    // Character 
    char d = '^';
    cout << d;

    return 0;
}

