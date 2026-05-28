#include <bits/stdc++.h>
using namespace std;

void pattern2(int n) {
    if(1 <= n && n<= 100)
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++){
                cout << '*';
            }
        cout << "\n";
        }
    else cout << "Enter number between 1 to 100";
    }

int main(){
    int n;
    cin >> n;
    pattern2(n);
    return 0;
}

