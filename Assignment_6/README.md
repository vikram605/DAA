# Problem statment
Optimal Stock Cutting problem

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

**Test case**

Find Element
```
Test Case-1
Enter the length of the stock:
5
Below is the different lengths of stock of length=5:
1 2 3 4 5 
Below is the randomly generated prices of different length of stock:
6 5 0 7 3 
Maximum possibe profit is 30.
#--------------------------#
Test Case-2
Input:
Enter the length of the stock:
6
Below is the different lengths of stock of length=6:
1 2 3 4 5 6
Below is the randomly generated prices of different length of stock:
0 6 8 1 9 0
Maximum possibe profit is 18.

---

Theory:
In this report we have used overall 3
algorithms to solve the Stock cutting problem.

First, we used the simple recursive algorithm
to solve the problem. This algorithm, though
fairly easy to understand and code, it’s time
complexity was exponential which was way
too much.

Second, we used the memoization technique
which was merely an extension of the
recursive algorithm. In this method all the
redundant calculations are avoided.
Thus the time complexity reduces drastically
to O(n2). Extra auxiliary space required
increases from O(n) to O(n2).

Third, we used dynamic programming. In this
method, no recursion is involved. Only two
nested for loops and a 2-D matrix are used.
Thus the time complexity involved is O(n2).
Extra auxiliary space required is O(n
2). No extra stack memory is required, which was the
case in the memoization technique.

Thus, we conclude that the algorithm
involving dynamic programming is the best
for solving the stock cutting problem as its
time complexity is way better than that of the
recursive method and its space complexity is
slightly better than that of the memoization
technique.


---

### References

[1] Introduction to Algorithms / Thomas H.
Cormen . . . [et al.]. - 3rd edition.
[2] The Design and Analysis of Algorithms
(Pearson) by A V Aho, J E Hopcroft, and J D
Ullman
[3] Algorithm Design (Pearson) by J
Kleinberg, and E Tard
