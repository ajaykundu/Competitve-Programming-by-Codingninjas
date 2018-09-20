/*

Return subsets sum to K
Send Feedback
Given an array A of size n and an integer K, return all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important.
Input format :
Line 1 : Integer n, Size of input array
Line 2 : Array elements separated by space
Line 3 : K 
Constraints :
1 <= n <= 20
Sample Input :
9 
5 12 3 17 1 18 15 3 17 
6
Sample Output :
3 3
5 1

*/

/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/
#include<iostream>
#include<vector>
using namespace std;


int helper(int input[],int size,int i,vector<int> v,int output[][50],int k,int &t)
{
    if(i==size)
    {
      
      int sumval=0;
      
      for(int i=0;i<v.size();i++)
      {
         sumval = sumval + v[i];
      }
      if(sumval==k)
      {
        //cout<<"hello"<<endl;
        
        
        output[t][0]=v.size();
        for(int i=1;i<=v.size();i++)
        {
            output[t][i]=v[i-1];
        }  
        
       
        
        t++;
        return 1;
      }
      else
      return 0;
    }
  int ans=0;
  
  ans = ans + helper(input,size,i+1,v,output,k,t);
  v.push_back(input[i]);
   ans = ans +helper(input,size,i+1,v,output,k,t);
  return ans;
}

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
  vector<int> v;
  int t=0;
   return helper(input,n,0,v,output,k,t);
  cout<<t<<endl;
  return t;
}
