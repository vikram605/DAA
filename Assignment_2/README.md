# Problem statment

Given set of elements, find average of all elements using divide and
conquer.

# how to use code
Input the size of array and it will randomly generate that size array and will give you the averrage of all the elemnets
```
#Download project
git clone https://github.com/vikram605/DAA 
```
Project Initialize 
```
cd DAA
#create assignment-1 folder
mkdir assignment_01

#go to assignment-1
cd assignment_01

#Create file
touch readme.md
touch DAA-ASSIGN-02.cpp
.
.
```
---
compile the code
```
g++ DAA-ASSIGN-02.cpp -o fname
```
Run the code
```
 ./fname
```
Output
```
Enter the number of elements in the array:
5
Below is the randomly generated array of length 5:
6 2 7 5 4 
The Average of the elements present in the array is: 4.8
```
---

**Test case**

Find average
```
Test Case-1
Input:
4
Out:
Below is the randomly generated array of length 5:
6 2 7 5 4 
The Average of the elements present in the array is: 4.8#--------------------------#
Test Case-2
Input:
4
Out:
Below is the randomly generated array of length 4:
7 4 7 9 
The Average of the elements present in the array is: 6.75
```

---

### Theory
1. Divide the problem into a number of
subproblems that are smaller instances
of the same problem.
2. Conquer the subproblems by solving
them recursively. If they are small
enough, solve the subproblems as base
cases.
3. Combine
the solutions to the
subproblems into the solution for the
original problem.
---

### Analysis

**Time Complexity**

Following is recurrence for time complexity
T(n) =2(n/2) + O(1)
The time complexity for such an recurrence
relation can we found out using the
Masters Algorithm:
We compare the given recurrence relation with
T(n) = aT(n/b) + θ (n k log p n).
Then, we have-
a = 2
b = 2
k = 0
p = 0
Now, a = 2 and b k = 2 0 = 1.
Clearly, a > b k .
So, we follow case-01 which is If a > b k , then T(n)
= O(n logb(a) )
So, we have-
T(n) = O((n logb(a) )
T(n) = O (n log2(2) )
T(n) = O (n)
The solution of recurrence is O(n) using Master
Method.
**Space Complexity**

Since we input a 1-D array of size N, it will
require O(n) space.
Also as the number of variables used in every
function call are fixed, if we try to calculate the
total number of function calls made (using the
method used for calculating time complexity), we
get O(n) space complexity.
Thus the overall space complexity of the
algorithm is = O(n) + O(n) ≈ O(n).
Space Complexity : O(n)

---

### References

[1] Introduction to Algorithms / Thomas H.
Cormen . . . [et al.]. - 3rd edition.


