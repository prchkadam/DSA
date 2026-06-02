#include <bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    if(1 <= n && n<= 100)
        for (int i = 0 ; i < n ; i++){
            for (int j = 0 ; j < n ; j++){
                cout << '*';
            }
            cout << "\n";
        }
    else cout << "Enter number between 1 to 100";
    }

int main() {
    int n;
    cin >> n;    
    pattern1(n);
    return 0;
}

// TC : n^2
// SP : 1