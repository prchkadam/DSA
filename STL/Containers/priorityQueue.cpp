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
    pq.emplace(91);

    cout << pq.top() << '\n'
         << "size : " << pq.size();
    pq.pop();
    cout << '\n'
         << pq.top() << '\n'
         << "size : " << pq.size();
     pq.pop();
    cout << '\n'
         << pq.top();
    cout << '\n'
         << "size : " << pq.size();
};

void minimumHeap() {
    priority_queue <float , vector<float> , greater<float> > pq;
    pq.emplace(48.12); // {48.12}
    pq.emplace(6.46); // {6.46 , 48.12}
    pq.emplace(86.1); // {6.46 , 48.12 , 86.1}
    pq.emplace(16.56); // {6.46 , 16.56 , 48.12 , 86.1}

    cout << pq.top();
    cout << '\n'
         << "size : " << pq.size();
    pq.pop();
    cout << '\n'
         << pq.top();
};

int main()
{
    maximumHeap();
    cout << '\n' << '\n';
    minimumHeap();
    return 0;
}