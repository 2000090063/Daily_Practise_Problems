/*C. Get an Even String
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
A string a=a1a2…an is called even if it consists of a concatenation (joining) of strings of length 2 consisting of the same characters. In other words, a string a is even if two conditions are satisfied at the same time:

its length n is even;
for all odd i (1≤i≤n−1), ai=ai+1 is satisfied.
For example, the following strings are even: "" (empty string), "tt", "aabb", "oooo", and "ttrrrroouuuuuuuukk". The following strings are not even: "aaa", "abab" and "abba".

Given a string s consisting of lowercase Latin letters. Find the minimum number of characters to remove from the string s to make it even. The deleted characters do not have to be consecutive.

Input
The first line of input data contains an integer t (1≤t≤104) —the number of test cases in the test.

The descriptions of the test cases follow.

Each test case consists of one string s (1≤|s|≤2⋅105), where |s| — the length of the string s. The string consists of lowercase Latin letters.

It is guaranteed that the sum of |s| on all test cases does not exceed 2⋅105.

Output
For each test case, print a single number — the minimum number of characters that must be removed to make s even.

Example
inputCopy
6
aabbdabdccc
zyx
aaababbb
aabbcc
oaoaaaoo
bmefbmuyw
outputCopy
3
3
2
0
2
7
Note
In the first test case you can remove the characters with indices 6, 7, and 9 to get an even string "aabbddcc".

In the second test case, each character occurs exactly once, so in order to get an even string, you must remove all characters from the string.

In the third test case, you can get an even string "aaaabb" by removing, for example, 4-th and 6-th characters, or a string "aabbbb" by removing the 5-th character and any of the first three.

*/

//solution 


import java.util.*;
public class GetAnEvenString {
  public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0) {
			String s=sc.next();
			char[] ch=s.toCharArray();int ans=s.length(),n=s.length();
			Map<Character,Integer>mp=new HashMap<>();
			for(int i=0;i<n;i++) {
				if(!mp.containsKey(ch[i])) {
					mp.put(ch[i], 1);
				}else {
					ans-=2;
					mp.clear();
				}
			}
			System.out.println(ans);
		}
	}
}
