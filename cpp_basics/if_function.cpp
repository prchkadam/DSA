// Write a program that takes age from the user and prints if they are adult or not

#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "The user is adult";
    }
    else if (age > 0)
    {
        cout << "The user is not adult";
    }
    
    return 0;
}
// if else statement can run without else statement too
