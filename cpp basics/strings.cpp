#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Divya";
    int length = s.size();
    cout << length << "\n" << s[0] << "\n";
    s[length - 1] = 'A';
    cout << s;
    return 0;
}

// .size is used to find the length / size of an string
// Indexing of string starts from zero
// For character yu can't use " ", but have to use ' ' 
