# Problem statment
optimal stock cutting problem

# how to use code
first it will randomly generate array of size 4x4(it can be changed by changing ROW andCOL in code part) then
enter the ellement to be found
```
#Download project
git clone https://github.com/vikram605/DAA 
```
Project Initialize 
```
cd DAA
#create assignment-6 folder
mkdir assignment_06

#go to assignment-6
cd assignment_06

#Create file
touch readme.md
touch DAA-ASSIGN.cpp
.
.
```
---
compile the code
```
g++ DAA-ASSIGN.cpp -o fname
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

Find Element
```
Test Case-1
Input:
63
Output:
Below is the randomly generated 4X4 matrix:-
6 16 26 35 
41 45 49 51 
58 61 63 71 
75 83 85 89 
Element found at index {2,2}
#--------------------------#
Test Case-2
Input:
4
Output:
5 14 20 24 
27 28 31 33 
35 44 51 53 
63 67 73 74

Not found
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
T(n) = 3T(n/2) + O(1)
The time complexity for such an recurrence
relation can we found out using the
###### Masters Algorithm:
We compare the given recurrence relation
with T(n) = aT(n/b) + θ (n k log p n).


Then, we have-
a = 3
b = 2
k = 0
p = 0
Now, a = 3 and b k = 2 0 = 1.
Clearly, a > b k .
So, we follow case-01 which is If a > b k , then
T(n) = O(n logb(a) )
So, we have-
T(n) = O((n logb(a) )
T(n) = O (n log2(3) )
T(n) = O (n 1.58 )
The solution of recurrence is O(n 1.58 ) using
Master Method.
But the actual implementation calls for one
submatrix of size n x n/2 or n/2 x n, and
another submatrix of size n/2 x n/2.
Time Complexity : O(n 1.58 )



**Space Complexity**

Since we input a 2-D matrix of size NXN, it
will require O(n 2 ) space.
Also as the number of variables used in every
function call are fixed, if we try to calculate
the total number of function calls made (using
the method used for calculating time
complexity), we get O(n 1.58 ) space
complexity.
Thus the overall space complexity of the
algorithm is = O(n 1.58 ) + O(n 2 ) ≈ O(n 2 ).
Space Complexity : O(n 2 )

---

### References

[1] Introduction to Algorithms / Thomas H.
Cormen . . . [et al.]. - 3rd edition.
[2] The Design and Analysis of Algorithms
(Pearson) by A V Aho, J E Hopcroft, and J D
Ullman
[3] Algorithm Design (Pearson) by J
Kleinberg, and E Tard
[4]https://www.geeksforgeeks.org/auxiliary-sp
ace-recursive-functions/#:~:text=For%20exa
mple%20if%20we%20need,space%20require
d%20by%20a%20program
[5]https://www.geeksforgeeks.org/divide-and-
conquer-algorithm-introduction/

