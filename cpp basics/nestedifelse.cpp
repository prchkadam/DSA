/* Take the age from the user and decide accordingly
1. If age < 18 , print-> not eligible for job
2. If age >= 18,print-> "eligible for job"
3. If age >= 55 and age <= 57,print-> "eligible for job, but retirement soon."
4. If age > 57print-> "retirement time" */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;

    cin >> age;
    cout << "Status : ";

    if (age < 18)
    {
        cout << "not eligible for job.";
    }
    else if (age <= 110)
    {

        if (age < 55)
        {
            cout << "eligible for job";
        }

        else if (age <= 57)
        {
            cout << "eligible for job , but retirement soon.";
        }

        else
        {
            cout << "retirement time";
        }
    }
    else
    {
        cout << "Enter a valid age";
    }

    return 0;
}