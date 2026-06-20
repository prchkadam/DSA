#include <bits/stdc++.h>
using namespace std;
void stacks (){
    stack <char> s;
    s.emplace('Y');
    s.push('E');
    s.emplace('H');
    
    // s.emplace_back('Y'); This _back doesn't work here
    
    // Prints the stack
    stack<int> temp;
    while (!s.empty()) {
        temp.push(s.top());
        std::cout << s.top() << " ";
        s.pop();
    }
    // Restores the stack
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }

    cout << '\n' << s.top() ;
    // . top shows the last inserted value

    s.pop();
    cout << '\n' << s.top() ;
    cout << '\n' << s.size() ;
    cout << '\n' << s.empty() ;

};

int main() {
    stacks();
    return 0;
}