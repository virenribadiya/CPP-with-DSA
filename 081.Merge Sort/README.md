
![title](https://user-images.githubusercontent.com/108461765/194088861-f347aa3a-ea6a-45a0-a063-b89d2a696e3b.PNG)

- It is also based on divide and conquer.
# <strong>Illustration / working:</strong>

Think of it as a recursive algorithm continuously splits the array in half until it cannot be further divided. This means that if the array becomes empty or has only one element left, the dividing will stop, i.e. it is the base case to stop the recursion. If the array has multiple elements, split the array into halves and recursively invoke the merge sort on each of the halves. Finally, when both halves are sorted, the merge operation is applied. Merge operation is the process of taking two smaller sorted arrays and combining them to eventually make a larger one.
