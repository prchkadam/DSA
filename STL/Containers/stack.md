A stack is a non-primitive linear data structure. 

it is an ordered list in which the addition of a new data item and deletion of the already existing data item is done from only one end known as the top of the stack (TOS). 

The element which is added in last will be first to be removed and the element which is inserted first will be removed in last. 

As all the deletion and insertion in a stack are done from the top of the stack, the last added element will be the first to be removed from the stack. That is the reason why stack is also called Last-in-First-out (LIFO).

Only some functions work, like swap and
top() – returns the element at the top of the stack.

pop() – deletes the last element of the stack.

push() – to insert an element in the stack.

emplace() – to insert an element in the stack.

size() – returns the number of elements on the stack.

empty() – to check if the stack is empty or not.


Here all the operations happen in O(1).