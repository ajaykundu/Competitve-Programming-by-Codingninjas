#include<iostream>
using namespace std;

int partition(int input[],int si,int ei)
{
     int count=0;
     
     for(int i=si+1;i<=ei;i++)
     {
         if(input[si]>=input[i])
         {
           count++;
         }
     }
  
    int swapIndex = si+count;
    swap(input[swapIndex],input[si]);
  
    int i=si;
    int j=ei;
  
    while(i<swapIndex && j>swapIndex)
    {
         if(input[j]>input[swapIndex])
         {
           j--;
         }
        if(input[i]<=input[swapIndex])
        {
          i++;
        }
       if(input[i]>input[swapIndex] && input[j]<=input[swapIndex])
       {
         swap(input[i],input[j]);
         
           i++;
           j--;
         
       }
    }
    return swapIndex;
}


void quickSortHelper(int input[],int si,int ei)
{
    if(si>ei)
      return;
  
     int part = partition(input,si,ei);
   
     quickSortHelper(input,si,part-1);
     quickSortHelper(input,part+1,ei);
    
}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
   quickSortHelper(input,0,size-1);
  
}
