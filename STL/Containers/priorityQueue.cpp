#include <bits/stdc++.h>
using namespace std;

void maximumHeap()
{
    priority_queue<int> pq;
    pq.push(4);     // {4}
    pq.emplace(88); // {88 , 4}
    pq.emplace(78); // {88 , 78 , 4}
    pq.emplace(91); // {91 , 88 , 78 , 4}
    pq.emplace(1);  // {91 , 88 , 78 , 4 , 1}

    cout << pq.top();
    pq.pop();
    cout << '\n' << pq.top();
};

void minimumHeap() {

};

int main()
{
    maximumHeap();
    minimumHeap();
    return 0;
}