#include <bits/stdc++.h>
using namespace std;

void lists(){
    // List is a double linked sequence that supports both forward and backward traversal.
    // The time taken in the insertion and deletion in the beginning, end and middle is constant. It has the non-contiguous memory and there is no pre-allocated memory.

    // list<object_type> variable_name; 
    list<int> l;
    l.emplace_back(2);
    l.emplace_front(4);
    l.push_back(5);
    l.push_front(10);
    
    for(auto it : l){
        cout << it << ' ';
    }

    // rest function same like vector
};

int main() {
    lists();
    return 0;
}