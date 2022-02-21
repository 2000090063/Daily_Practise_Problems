/******************************************************************************
You are given an array A of length K. Find any permutation P of length N such that only the prefixes of length Ai (1≤i≤K) form a permutation.

Under the given constraints, it is guaranteed that there exists at least one permutation which satisfies the given condition.

If there are multiple solutions, you may print any.

Note: A permutation of length N is an array where every element from 1 to N occurs exactly once.

Input Format
The first line of the input contains a single integer T - the number of test cases.
The first line of each test case contains two integers N and K - the length of the permutation to be constructed and the size of the array A respectively.
The second line of each test case contains K space-separated integers A1,A2,…,AK denoting the array A.
Output Format
For each test case, print a single line containing N space-separated integers P1,…,PN (1≤Pi≤N). If there are multiple solutions, you may print any.

Constraints
1≤T≤105
1≤K≤N≤105
1≤A1<A2<⋯<AK=N
the sum of N over all test cases does not exceed 5⋅105
Sample Input 1 
3
8 4
3 6 7 8
7 1
7
5 5
1 2 3 4 5
Sample Output 1 
2 3 1 6 4 5 7 8
4 6 1 5 2 7 3
1 2 3 4 5
Explanation
Test case-1: [2,3,1,6,4,5,7,8] is valid permutation because

Prefix of length 3=[2,3,1] is a permutation.
Prefix of length 6=[2,3,1,6,4,5] is a permutation.
Prefix of length 7=[2,3,1,6,4,5,7] is a permutation.
Prefix of length 8=[2,3,1,6,4,5,7,8] is a permutation.
None of the other prefixes form a permutation.
*******************************************************************************/


//solutions

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{  int n,k;
	cin>>n>>k;
	int a[k];
	for(int i=0;i<k;i++)
	cin>>a[i];
	sort(a,a+k);
	int p=0;
	vector<int>v;
	for(int j=0;j<k;j++)
	{
	    for(int l=a[j];l>p;l--)
	    {
	        v.push_back(l);
	    }
	    p=a[j];
	}
	for(int i:v)
	 cout<<i<<" ";
	 cout<<endl;
	   
}
 return 0;
}
