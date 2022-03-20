
...
Given a series of numbers find the sum of first N numbers.

The series is 1, 3, 6, 10, 15, ....

Input Format

Single integer represents N.

Constraints

1<= N <= 10,000

Output Format

Sum of first N number in series.

Sample Input 0

1
Sample Output 0

1
Sample Input 1

4
Sample Output 1

20
...
  
#solution
n = int(input())
c = 0
sum =0
for i in range(1,n+1):
    c = c+i
    sum = sum +c
print(sum)
