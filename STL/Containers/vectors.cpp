#include <bits/stdc++.h>
using namespace std;

void vectors()
{
    vector<int> a;
    a.push_back(15);
    a.emplace_back(82);

    vector<char> b;
    b.emplace_back('@');
    b.emplace_back('^');
    b.emplace_back('/');
    // We can even start with emplace_back firstly

    // emplace_back is often faster than push_back because it constructs the object directly in the container's memory, whereas push_back typically requires a temporary object to be created first and then copied or moved

    // Vector of pair
    vector<pair<int, char>> c;
    c.emplace_back(51, '*');
    c.push_back({465, '*'});
    // Always make sure to use single quote for charcter, and double quote works for both character and string

    // Another way to create vector using predefined size
    vector<int> v1(5, 100);
    // This will create vector of 5 elements, starting from index 0 contating 100 as a value each
    vector<int> v2(v1);
    // This will copy the vector
    v2.emplace_back(200);
    // And even though having predefined size, we can still change it
    vector<char> v3(6);
    // This will create vector with garbage value or zero

    

    // To print vector
    cout << '\n' << '\n';
     for (const auto &element : a)
    {
        std::cout << element << " ";
    }
    cout << '\n';
    for (const auto &element : b)
    {
        std::cout << element << " ";
    }
    cout << '\n';
    for (size_t i = 0; i < c.size(); ++i)
    {
        cout << "(" << c[i].first << ", " << c[i].second << ")  ";
    }
    cout << '\n';
    for (const auto &element : v1)
    {
        std::cout << element << " ";
    }
    cout << '\n';
    for (const auto &element : v2)
    {
        std::cout << element << " ";
    }
    cout << '\n';
    for (const auto &element : v3)
    {
        std::cout << element << " ";
    }

}

int main()
{
    vectors();
    return 0;
}