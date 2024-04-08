# MaxMod

### Problem Description

Given an array A of size N, Groot wants you to pick 2 indices i and j such that 

1. 1<= i, j<=N
2. A[i] % A[j] is maximum among all possible pairs of (i, j).

Help Groot in finding the maximum value of A[i] % A[j] for some i, j.

### Problem Constraints
```
1＜=N＜=100000
0<=A［il<= 100000
```

### Input Format
First and only argument in an integer array A.

### Output Format
Return an integer denoting the maximum value of A[i] % A[j] for any valid i, j.

### Example Input
```
Input 1:
    A = 11, 2, 44, 31

Input 2:
    A = 12, 6, 41
```

### Example Output
```
Output 1:
    3

Output 2:
    4
```

### Example Explanation

```
Explanation 1:
    
    For i = 4, j=3 Alil % Alj1 = 3 % 44 = 3.
    
    No pair exists which has more value than 3.

Explanation 2:
    
    For i = 3, j = 2 Alil% Alj1 = 4 % 6 = 4.
```