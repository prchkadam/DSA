#include <bits/stdc++.h>
using namespace std;

void pattern6(int n) {
        if(n >= 1 && n <=100)
            for (int i = n; i > 0; i--) {
                for (int j = 1; j <= i; j++){
                cout << j;
                }
            cout << "\n";
        }
        else cout << "Enter number between 1 to 100";
    }
    
int main() {

    int n;
    cin >> n;
    pattern6(n);
    return 0;
}

// TC : n^2
// SP : 1