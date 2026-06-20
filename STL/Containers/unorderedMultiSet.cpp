#include <bits/stdc++.h>
using namespace std;

void explainUnMulSet(){
    unordered_multiset <int> s;

    // Insert elements
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    s.insert(5);

    // Display all elements of the unordered_multiset
    cout << "Elements: ";
    for (auto it = s.begin(); it != s.end(); it++) { 
        cout << *it << " "; 
    }
    cout << '\n';

    int n = 2;
    // Check if element '2' is present using find()
    if (s.find(2) != s.end())
        cout << n << " is present." << '\n';

    // Erase the first element using iterator
    s.erase(s.begin());
    cout << "Elements: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << '\n';

    // Display the size of the unordered_multiset
    cout << "Size : " << s.size() << endl;

    // Check if the unordered_multiset is empty
    if (s.empty() == false)
        cout << "The unordered multiset is not empty " << endl;
    else
        cout << "The unordered multiset is empty" << endl;

    // Clear all elements from the unordered_multiset
    s.clear();
    cout << "Size : " << s.size();
};

int main() {
    explainUnMulSet();
    return 0;
}