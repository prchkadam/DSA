/* Take the day n. and print corresponding day name 
Starting sunday as 1.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int day ;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Sunday";
        break;
    
    case 2:
        cout << "Monday";
        break;

    case 3:
        cout << "Tuesday";
        break;

    case 4:
        cout << "Wednesday";
        break;

    case 5:
        cout << "Thursday";
        break;

    case 6:
        cout << "Friday";
        break;

    case 7:
        cout << "Saturday";
        break;

    default:
        cout << "Enter a valid number";
        break;
    }
    return 0;
}

// Break, it prevents execution of futher cases
// Limited to Integer or Character Types