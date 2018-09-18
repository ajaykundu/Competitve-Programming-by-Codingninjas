#include<iostream>
using namespace std;


int weightFormed(int n,int a,int b,int x=0,int y=0)
{
  
  int ans=0;
  
  for(;a*x <=n;x++)
  {
    y=0;
    for(;b*y <=n;y++)
    {
      //cout<<x<<" "<<y<<endl;
         if((a*x + b*y)==n)
         {
           ans++;
         }
         else 
         if((a*x + b*y)>n)
         {
           break;
         }
    }
   //cout<<x<<endl; 
  }
  return ans;
}

int main(){
	// Write your code here
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,d;
    cin>>a>>b>>d;
    cout<<weightFormed(d,a,b)<<endl;
  }
	return 0;
}