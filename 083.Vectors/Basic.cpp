

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
// Assign vector
vector<int> vec;

// fill the array with 12 seven times
vec.assign(7, 12);

cout << "The vector elements are: ";
for (int i = 0; i < 7; i++)
cout << vec[i] << " ";

// inserts 24 to the last position
vec.push_back(24);
int s = vec.size();
cout << "nThe last element is: " << vec[s - 1];

// prints the vector
cout << "nThe vector elements after push back are: ";
for (int i = 0; i < vec.size(); i++)
cout << vec[i] << " ";

// removes last element
vec.pop_back();

// prints the vector
cout << "nThe vector elements after pop_back are: ";
for (int i = 0; i < vec.size(); i++)
cout << vec[i] << " ";

// inserts 10 at the beginning
vec.insert(vec.begin(), 10);

cout << "nThe first element after insert command is: " << vec[0];

// removes the first element
vec.erase(vec.begin());

cout << "nThe first element after erase command is: " << vec[0];

// inserts at the beginning
vec.emplace(vec.begin(), 5);
cout << "nThe first element emplace is: " << vec[0];

// Inserts 20 at the end
vec.emplace_back(20);
s = vec.size();
cout << "nThe last element after emplace_back is: " << vec[s - 1];

// erases the vector
vec.clear();
cout << "nVector size after clear(): " << vec.size();

// two vector to perform swap
vector<int> obj1, obj2;
obj1.push_back(2);
obj1.push_back(4);
obj2.push_back(6);
obj2.push_back(8);

cout << "nnVector 1: ";
for (int i = 0; i < obj1.size(); i++)
cout << obj1[i] << " ";

cout << "nVector 2: ";
for (int i = 0; i < obj2.size(); i++)
cout << obj2[i] << " ";

// Swaps obj1 and obj2
obj1.swap(obj2);

cout << "nAfter Swap nVector 1: ";
for (int i = 0; i < obj1.size(); i++)
cout << obj1[i] << " ";

cout << "nVector 2: ";
for (int i = 0; i < obj2.size(); i++)
cout << obj2[i] << " ";
}
