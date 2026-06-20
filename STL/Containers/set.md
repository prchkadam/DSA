A set in STL is a container that stores unique elements in a particular / sorted order. Every operation on a set takes O(log n) complexity.

insert() – to insert an element in the set.

begin() – return an iterator pointing to the first element in the set.

end() – returns an iterator to the theoretical element after the last element.

count() – returns true or false based on whether the element is present in the set or not.

clear() – deletes all the elements in the set.

find() – to search an element in the set.

erase() – to delete a single element or elements between a particular range.

size() – returns the size of the set.

empty() – to check if the set is empty or not.

cbegin() – it refers to the first element of the set.

cend() – it refers to the theoretical element after the last element of the set.

rbegin() – it points to the last element of the set.

rend() – it points to the theoretical element before the first element of the set.

bucket_size() – gives the total number of elements present in a specific bucket in a set.

emplace() – to insert an element in the set.

max_size() – the maximum elements a set can hold.

max_bucket_count() – to check the maximum number of buckets a set can hold.