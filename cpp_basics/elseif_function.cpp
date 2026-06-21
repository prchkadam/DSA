/* If marks are less than 25, it prints "Grade: F."
If marks are between 25 and 44 (inclusive), it prints "Grade: E."
If marks are between 45 and 49 (inclusive), it prints "Grade: D."
If marks are between 50 and 59 (inclusive), it prints "Grade: C."
If marks are between 60 and 69 (inclusive), it prints "Grade: B."
If marks are 70 or higher, it prints "Grade: A."
If marks are outside the valid range, it prints "Invalid marks entered." */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks :" << '\n';
    cin >> marks;

    if (marks >= 70 && marks <= 100){
        cout << "Grade A" ;
    }
    else if (marks > 60){
        cout << "Grade B" ;
    }
    else if (marks > 50){
        cout << "Grade C" ;
    }
    else if (marks > 45){
        cout << "Grade D" ;
    }
    else if (marks > 25) {
        cout << "Grade E" ;
    }
    else if (marks <= 25 ){
        cout << "Grade F" ;
    }
    else {
        cout << "Invalid marks entered.";
    }

    return 0;
}

// we use else if.. because if we use "if" then every possibility is checked, which will take time. Thus we use else if, like if the 2nd condition is correct then it will terminate at that case.

// istead of writing (marks <= 44 && marks > 25), we can directly mention (marks > 25) in this case. As an optimized code