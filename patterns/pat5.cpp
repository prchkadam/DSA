#include <bits/stdc++.h>
using namespace std;

void pattern5(int n) {
        if(n >= 1 && n <=100)
            for (int i = 0; i < n; i++){
                for (int j = n; j > i; j--) {
                    cout << '*';
                }
            cout << "\n";
            }
        else cout << "Enter number between 1 to 100";
    }
int main() {

    int n;
    cin >> n;
    pattern5(n);
    return 0;
}

// TC : n^2
// SP : 1