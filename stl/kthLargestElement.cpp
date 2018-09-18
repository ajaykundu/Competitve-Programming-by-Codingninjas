
#include<queue>
#include<vector>
#include<iostream>
using namespace std;

int kthLargest (vector<int> arr, int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
     priority_queue <int, vector<int>, greater<int> > q;
  
    for(int i=0;i<k;i++)
    {
      q.push(arr[i]);
    }
  
  for(int i=k;i<n;i++)
  {
      if(q.top()<arr[i])
      {
        q.pop();
        q.push(arr[i]);
      }
  }
    
     return q.top();
}
