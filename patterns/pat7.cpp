#include <bits/stdc++.h>
using namespace std;

void pattern7(int n)
{
    if (n >= 1 && n <= 100)
        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k < n - i -1; k++)
            {
                cout << ' ';
            }
            for (int j = 0; j < (2 * i + 1); j++)
            {
                cout << '*';
            }
            for (int k = 0; k < n - i - 1; k++)
            {
                cout << ' ';
            }
            cout << "\n";
        }
    else
        cout << "Enter number between 1 to 100";
}
int main()
{
    int n;
    cin >> n;
    pattern7(n);
    return 0;
}

// TC : n^2 = n(n + n + n)
// SP : 1