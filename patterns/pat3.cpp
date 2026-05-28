#include <bits/stdc++.h>
using namespace std;

void pattern3(int n) {
        if(n >= 1 && n <=100)
            for (int i = 1; i <= n; i++){
                for (int j = 0; j < i; j++){
                cout << j + 1;
                }
            cout << "\n";
            }
        else cout << "Enter number between 1 to 100";
    }
int main() {
    int n;
    cin >> n;
    pattern3(n);
    return 0;
}