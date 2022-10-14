
Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. 

## Inbuilt Methods:
begin() – Returns an iterator pointing to the first element in the vector

end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector

rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element

rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

cbegin() – Returns a constant iterator pointing to the first element in the vector.

cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.

crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element

crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold

capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
<br><br>
resize(n) – Resizes the container so that it contains ‘n’ elements.
<br><br>
empty() – Returns whether the container is empty.
<br><br>
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
<br><br>
reserve() – Requests that the vector capacity be at least enough to contain n elements.
