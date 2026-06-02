#include <bits/stdc++.h>
using namespace std;

void pattern4(int n) {
        if(n >= 1 && n <=100)
            for (int i = 1; i <= n; i++) {
                for (int j = 0; j < i; j++) {
                    cout << i;
                }
            cout << "\n";
            }
        else cout << "Enter number between 1 to 100";
    }

int main() {
    int n;
    cin >> n;
    pattern4(n);
    return 0;
}

// TC : n^2
// SP : 1