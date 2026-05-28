#include <bits/stdc++.h>
using namespace std;

void pattern7(int n) {
        if (1 <= n && n <= 100)
        for (int i = 1 ; i <= n; i++){
            for (int k = 0 ; k < (n - i)/2 ; k++){
                cout << " ";
            }
            for (int j = 0 ; j < i ; j++){
                cout << '*';
                }
            cout << "\n";
        }
        else cout << "Enter number between 1 to 100";
    }

int main() {
    int n;
    cin >> n;
    pattern7(n);
    return 0;
}