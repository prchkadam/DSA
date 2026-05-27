#include <bits/stdc++.h>
using namespace std;

// Pass by value
void incNum (int a){
    a ++;
    cout << a;
}

// Pass by reference 
void incNumbyRef(int &a){
    a ++;
    cout << a;
}

int main() {
    int num = 10;
    incNum (num);
    cout << "\n" << num << "\n";
    incNumbyRef (num);
    cout << "\n" << num;
    return 0;
}

// Pass by value = A copy of variable is send and the original variable is not changed. The operation is done on the copy send to the function
// Memory Usage more cuz of copies

// Pass by reference = The address of variable is send, so cuz of this the original variable gets changed
// Memory Usage less
// Array always goes by pass 