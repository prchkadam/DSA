#include <bits/stdc++.h>
using namespace std;

void erase(){
    // Erase / Deletion
    vector<int> e = {879, 35, 989, 87, 9, 978, 76};
    e.erase(e.begin());
    for (auto it : e)
    {
        cout << it << ' ';
    }
    cout << '\n';

    vector<int> f = {879, 35, 989, 87, 9, 978, 76};
    f.erase(f.begin() + 3, f.begin() + 6);
    for (auto it : f)
    {
        cout << it << ' ';
    }
    cout << '\n';

    f.erase(f.begin() + 2, f.end());
    for (auto it : f)
    {
        cout << it << ' ';
    }
}

int main() {
    erase();
    return 0;
}