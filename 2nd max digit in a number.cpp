/******************************************************************************

-----You will be provided a number N, You are suppose to find the 2nd largest digit of the given number. if you don't have 2nd largest number print "No" as answer. Your not suppose to use the array and you should use only one loop in the program.

Ex: 123456789

2nd largest digit is 8.

Input Format

Single line of integer N.

Constraints

1<= N <= 10000000000

Output Format

Single digit of integer.

Sample Input 0

123456789
Sample Output 0

8
Explanation 0

In Given number 123456789 the second largest number is 8.
so we have to print 8 as output

*******************************************************************************/



//solution:
#include <bits/stdc++.h>

using namespace std;


int main() {   long long int n;
            cin>>n;
            string s=to_string(n);
            set<char>s1(s.begin(),s.end());
            if(s1.size()==1)
                cout<<"No";
            else
            {
            sort(s.begin(),s.end());
            cout<<s[s.size()-2];  
            }
    return 0;
}