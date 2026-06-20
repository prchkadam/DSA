A priority queue is an abstract data type where each element has an associated priority value. 

Unlike standard queues that process elements in the order they arrive (First-In, First-Out), a priority queue always serves the element with the highest priority first, regardless of when it was added.

Max-Priority Queue: The element with the highest value has the highest priority.

Min-Priority Queue: The element with the lowest value has the highest priority (e.g., smaller numbers are treated as more urgent).

The time complexity for Binary Heap :
Insert (push) = O(log n)
Extract Max / Min (pop) = O(log n)
Peek (top) = O(1)

priority_queue <datatype> q;