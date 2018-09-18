/* this programm is used for the calculation of prime numbers from 1 to N.*/
#include<iostream>
using namespace std;


int numPrime(int n)
{
	int *arr=new int[n+1];
    for(int i=0;i<=n;i++)
    {
    	arr[i]=1;
    }


	for(int i=2;i*i <= n;i++)
	{
          
          int j=i*2;

          while(j<=n)
          {
               arr[j]=0;
               j=j+i;
          }
	}
	int count=0;
	arr[0]=0;
	arr[1]=0;
	for(int i=0;i<=n;i++)
	{
		if(arr[i]==1)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n;
	cin>>n;
	cout<<numPrime(n)<<endl;
}