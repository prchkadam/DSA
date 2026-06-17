// Accessing array

#include <bits/stdc++.h>
using namespace std;

void vectors()
{
    vector<char> c;
    c.emplace_back('@');
    c.emplace_back('^');
    c.emplace_back('/');

    vector<pair<int, char>> a;
    a.emplace_back(51, '*');
    a.push_back({465, '*'});

    vector<int> num = {10, 20, 30, 40, 50};
    cout << a[1].first << '\n';
    cout << c.at(0) << '\n'
         << c.back() << '\n'
         << '\n';
    // can use .at or .back or using index

    // vector<int>::iterator can be defined as auto
    auto d = "op";
    cout << d << '\n';
    string b; // if it is not predefined then we can't use auto
    cin >> b;
    cout << b << '\n'
         << '\n';

    for (vector<int>::iterator it = num.begin(); it != num.end(); it++)
    {
        cout << *it << ' ';
    }

    cout << '\n';

    for (auto it = num.begin(); it != num.end(); it++)
    {
        cout << *it << ' ';
    }

    cout << '\n';

    // for each loop
    for (auto it : num)
    {
        cout << it << ' ';
    }
}
int main()
{
    vectors();
    return 0;
}