#include <bits/stdc++.h>
using namespace std;

void printqueue(queue<int> q1)
{
    queue<int> q2 = q1;
    while (!q2.empty()) // Iterate while the queue in not empty
    {
        cout << q2.front() << "\n";
        q2.pop();
    }
}

void queues()
{
    queue<int> q;
    for (int i = 1; i <= 5; i++)
        q.push(i); 
        // Push the elements in the queue

    cout << "The elements of the queue are:" << '\n';
    printqueue(q);

    cout << "The size of the queue: " << q.size() << '\n';
    cout << "The front element of the queue: " << q.front() << '\n';
    cout << "The last element of the queue: " << q.back() << '\n';
    cout << "Pop the front element: ";
    q.pop(); // Pop the elements out of the queue
    printqueue(q);
};

int main()
{
    queues();
    return 0;
}