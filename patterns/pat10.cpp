#include <bits/stdc++.h>
using namespace std;

void pattern10(int n)
{
    if (n >= 1 && n <= 100)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << '*';
            }
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << ' ';
            }
            cout << '\n';
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << '*';
            }
            for (int j = 0; j <= i; j++)
            {
                cout << ' ';
            }
            cout << '\n';
        }
    }
    else
        cout << "Enter number between 1 to 100";
}

int main()
{
    int n;
    cin >> n;
    pattern10(n);
    return 0;
    return 0;
}

// TC : n^2 = n(n + n) + n(n + n)
// SP : 1