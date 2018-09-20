/*

Print Subsets of Array
Send Feedback
Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print the subsets in different lines.
Input format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)
Constraints :
1 <= n <= 15
Sample Input:
3
15 20 12
Sample Output:
[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12 

*/

#include<string>
#include<iostream>
#include<vector>
using namespace std;

void helper(int input[],int size,int i,vector<int> v)
{
    if(i==size)
    {
      for(int i=0;i<v.size();i++)
      {
        cout<<v[i]<<" ";
      }
      cout<<endl;
      return;
    }
  
   helper(input,size,i+1,v);
  v.push_back(input[i]);
   helper(input,size,i+1,v);
}

void printSubsetsOfArray(int input[], int size) {
	// Write your code here
  vector<int> v;
      return helper(input,size,0,v);
}
