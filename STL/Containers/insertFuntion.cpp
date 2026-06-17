#include <bits/stdc++.h>
using namespace std;

void insertion()
{
    vector<int> v(6, 40);
    for (auto it : v)
    {
        cout << it << ' ';
    }
    cout << '\n';

    v.insert(v.begin() + 3, 50);
    // This inserts on the 3rd position after begin, which is 4th
    // Or this inserts after the 3 values.
    for (auto it : v)
    {
        cout << it << ' ';
    }
    cout << '\n';

    v.insert(v.end() - 2, 3, 'D');
    // here (position, no of types ,value)
    //  This inserts before the 2nd last element, or enters the value on the 2nd position frmo the end
    //  As we have used a charc here.. and then the type is integer, so ASCHII code is inserted.
    for (auto it : v)
    {
        cout << it << ' ';
    }
    cout << '\n';

    vector<char> vc = {'A', 'B', 'C'};
    v.insert(v.end(), vc.begin(), vc.end());
    for (auto it : v)
    {
        cout << it << ' ';
    }
    cout << '\n';

    cout << v.size() << '\n';
    // This is used to see the size of STL.

    v.pop_back();
    // This just removes the last value/element
    cout << "V : ";
    for (auto it : v)
    {
        cout << it << ' ';
    }
    cout << '\n';

    vector<int> rv(v.rbegin(), v.rend());
    // To reverse the vector
    cout << "RV : ";
    for (auto it : rv)
    {
        cout << it << ' ';
    }
    cout << '\n';

    v.swap(rv);
    // This swaps both the STL
    cout << "V : ";
    for (auto it : v)
    {
        cout << it << ' ';
    }
    cout << '\n';
    cout << "RV : ";
    for (auto it : rv)
    {
        cout << it << ' ';
    }
    cout << '\n';

    rv.clear();
    cout << "RV : ";
    for (auto it : rv)
    {
        cout << it << ' ';
    }
    cout << '\n'
         << v.empty();
    // clear() is a command to change the container (it removes all elements)
    // empty() is a question about the container (it checks if there are any elements)
};

int main()
{
    insertion();
    return 0;
}