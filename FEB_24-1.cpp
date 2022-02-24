
          /*Counting the Palindromic substrings with given lengths as an array  */


// solution:

#include<bits/stdc++.h>
using namespace std;


string substring(string s,int a,int b)
{
	string s1="";
	
	for(int i = a; i < b; i++)
		s1 = s1 + s[i];
		
	return s1;
}


vector<string> allPalindromeSubstring(string s)
{
	vector<string> v ;


	for (float pivot = 0; pivot < s.length();
								pivot += .5)
	{

		float palindromeRadius = pivot -
								(int)pivot;

	
		while ((pivot + palindromeRadius)
		< s.length() && (pivot - palindromeRadius)
		>= 0 && s[((int)(pivot - palindromeRadius))]
			== s[((int)(pivot + palindromeRadius))])
		{

			v.push_back(substring(s,(int)(pivot -
					palindromeRadius), (int)(pivot
						+ palindromeRadius + 1)));

			
			
			palindromeRadius++;
		}
	}

	return v;
}


int main()
{  int n;
   cin>>n;
   string s;
   cin>>s;
   int m;
   cin>>m;
   int a[m];
   for(int i=0;i<m;i++)
   cin>>a[i];
	vector <string> v =
				allPalindromeSubstring(s);
				int l=v.size();
				vector<int>v1(l);
    for(int i=0;i<l;i++)
    { string s1=v[i];
       v1[i]=s1.size();
    
    }
     map<int,int>mp;
	for(int i=0;i<l;i++)
	 mp[v1[i]]++;
	 int c=0;
	 for(int i=0;i<m;i++)
	{   c=c+mp[a[i]];
    
    }
    cout<<c;
	
   

	
	
}


