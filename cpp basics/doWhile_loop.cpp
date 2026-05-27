#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    do
    {
        cout << "This will run atleast once.";
        i++;
    } while (i < 0);

    return 0;
}

// Even though the condition is not satisfied but still it will run atleast once.