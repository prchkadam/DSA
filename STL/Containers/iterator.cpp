// Accessing array

#include <bits/stdc++.h>
using namespace std;

void iterators()
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
    cout << c.at(0) << '\n' << c.back() << '\n'
         << '\n';
    // can use .at or .back or using index

    // Using iterator, begin()
    auto it = c.begin();
    cout << it[2] << '\n'
         << *it << '\n'
         << &(*it) << '\n';
    it += 3;
    cout << *(it) << '\n'
         << '\n'; // as this is empty it shows garbage symbol.
    // &(*it) = used to see the adress of the memory location (althought this is not working on my laptop)

    // Iterators

    // end() = this points to the next location after the last value availble.
    vector<int>::iterator numIt_end = num.end();
    cout << "Value : " << *numIt_end << "  " << "Location : " << &(*numIt_end) << '\n';
    numIt_end -= 1;
    cout << "Value : " << *numIt_end << "  " << "Location : " << &(*numIt_end) << '\n' << '\n';

    // begin() = this points to the beginning of the first location
    vector<int>::iterator numIt_begin = num.begin();
    cout << "Value : " << *numIt_begin << "  " << "Location : " << &(*numIt_begin) << '\n';
    numIt_begin += 1;
    cout << "Value : " << *numIt_begin << "  " << "Location : " << &(*numIt_begin) << '\n' << '\n';

    // rend() = reverses the standard containers, the first value becomes last, and next location is shown
    vector<int>::reverse_iterator rnumIt_end = num.rend();
    cout << "Value : " << *rnumIt_end << "  " << "Location : " << &(*rnumIt_end) << '\n';
    rnumIt_end -= 1;
    cout << "Value : " << *rnumIt_end << "  " << "Location : " << &(*rnumIt_end) << '\n' << '\n';

    /// rbeing() = the last becomes the first.
    vector<int>::reverse_iterator rnumIt_begin = num.rbegin();
    cout << "Value : " << *rnumIt_begin << "  " << "Location : " << &(*rnumIt_begin) << '\n';
    rnumIt_begin += 3;
    cout << "Value : " << *rnumIt_begin << "  " << "Location : " << &(*rnumIt_begin) << '\n';
}
int main()
{
    iterators();
    return 0;
}