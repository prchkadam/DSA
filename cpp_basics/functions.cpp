#include <bits/stdc++.h>
using namespace std;

// Non - Parameterised Void function
void printText()
{
    cout << "Hello World";

    // You can't use to return statement over here.
    // return 0;
}

// Parameterised Void function
void printUserName(string name)
{
    cout << "Hello " << name;
}

// Non - Parameterised Return function
int sumFunction()
{
    return 5 + 6;
}

// Parameterised Return function
int mulFunction(int a, int b)
{
    int mul = a * b;
    return mul;
}

int maxFunction(int a, int b){
    if (a > b) return a;
    else return b;
}


int main()
{
    printText();

    cout << "\n";

    printUserName("Divya");

    cout << "\n";

    int num = sumFunction();
    cout << num;

    cout << "\n";

    int x, y, num2;
    cin >> x >> y;
    num2 = mulFunction(x, y);
    cout << num2;

    cout << "\n";

    int maxx = maxFunction(x , y);
    cout << maxx ;
    

    return 0;
}

// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return
// parameterised
// non parameterised