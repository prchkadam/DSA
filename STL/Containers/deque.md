Double Ended Queue which is also called Deque is a type of queue data structure in which the insertion and deletion of elements can be either in front or rear. 

Syntax : deque<object_type> variable_name; 

All functions same as vectors and list

push_back() – to insert an element at the end of the deque.


push_front() – to insert an element at the front of the deque.


pop_back() – deletes the last element of the deque.


pop_front() – deletes the front element of the deque.


front() – it gives a reference to the first element of the deque.


back() – it gives a reference to the last element of the deque.


size() – returns the number of elements on the deque.


empty() – to check if the deque is empty or not.


begin() - it refers to the first element of the deque.


end() - it refers to the theoretical element after the last element of the deque.


cbegin() – it refers to the first element of the deque.


cend() – it refers to the theoretical element after the last element of the deque


rbegin() – it points to the last element of the deque.


rend() – it points to the theoretical element before the first element of the deque.


emplace_front() – to insert an element at the front of the deque.


emplace_back() – to insert an element at the end of the deque.


max_size() – the maximum elements a deque can hold.


clear() - to delete all the elements of the deque.


erase() - to delete a single element or elements between a particular range.