#include <bits/stdc++.h>
using namespace std;

void explainSet()
{
    set<int> s;
    s.emplace(25); // {25}
    s.emplace(30); // {25 , 30}
    s.emplace(54); // {25 , 30 , 54}
    s.emplace(30); // {25 , 30 , 54}
    s.emplace(65); // {25 , 30 , 54 , 65}
    s.insert(40);  // {25 , 30 , 40 , 54 , 65}
    s.insert(65);  // {25 , 30 , 40 , 54 , 65}
    cout << "length : " << s.size() << '\n';
    // Here it is stored in order way, also repeated values are not included

    // Functionality of insert in vector can be used also, that only increases efficiency

    // begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above

    cout << s.count(2) << '\n' // False = 0
         << s.count(30) << '\n'
         << '\n'; // True = 1

    auto it = s.find(30);
    // It searches for the no.in the set.
    // It returns an iterator (a pointer-like object) pointing to the memory location of that value, or an iterator to the end of the set if the value is not found.
    if (it != s.end())
        cout << "true" << '\n';
    else
        cout << "false" << '\n';

    s.erase(30);
    // Removes that number from set.

    if (s.find(30) != s.end())
        cout << "true" << '\n';
    else
        cout << "false" << '\n';

    auto it1 = s.find(40);
    auto it2 = s.find(4); // As this points towards the end where value is not found.. so it removes all the values after it1
    s.erase(it1, it2);

    // Prints all the elements
    for (const int &element : s)
    {
        cout << element << " ";
    }
};

void bounds()
{
    set<int> s = {10, 20, 30, 40, 50};

    // Case 1: The value EXISTS in the set (e.g., 30)
    auto lb1 = s.lower_bound(30);
    // Points to 30 (since 30 >= 30)
    auto ub1 = s.upper_bound(30);
    // Points to 40 (since 40 is the first element > 30)

    cout << "Lower bound of 30: " << *lb1 << "\n";
    cout << "Upper bound of 30: " << *ub1 << "\n\n";

    // Case 2: The value DOES NOT EXIST in the set (e.g., 25)
    auto lb2 = s.lower_bound(25);
    // Points to 30 (since 30 is the first element >= 25)
    auto ub2 = s.upper_bound(25);
    // Points to 30 (since 30 is the first element > 25)

    cout << "Lower bound of 25: " << *lb2 << "\n";
    cout << "Upper bound of 25: " << *ub2 << "\n\n";
};

int main()
{
    explainSet();
    cout << '\n' << '\n';
    bounds();
    return 0;
}