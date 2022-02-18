/*
Given an array and a number k where k is smaller than the size of the array, we need to find the k’th smallest element in the given array. It is given that all array elements are distinct.

Examples:  

Input: arr[] = {7, 10, 4, 3, 20, 15} 
k = 3 
Output: 7

Input: arr[] = {7, 10, 4, 3, 20, 15} 
k = 4 
Output: 10 

*/

//solution should only sloved through o(n) time compelxity.

------------*******************************************----------------------------------
   //solution:
 int kthSmallest(int arr[], int l, int n , int k) {
        int max=INT_MIN;
        for(int i=l;i<=n;i++)
           {
               if(arr[i]>max)
               max=arr[i];
           }
        int a[max+1]={0};
        for(int i=l;i<=n;i++)
        {
            a[arr[i]]=arr[i];
        }
        int c=0;
        for(int i=0;i<=max;++i)
        {
            if(a[i]!=0)
            {
                c++;
                if(c==k)
                {
                    return a[i];
                     
                }
            }
        }
