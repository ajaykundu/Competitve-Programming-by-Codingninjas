// input - input array
// size - length of input array
// element - value to be searched

int helper(int input[],int si,int ei,int element)
{
    if(si>ei)
      return -1;
    
   int mid=(si+ei)/2;
   if(input[mid]==element)
   {
     return mid;
   }else if(input[mid]>element)
   {
       return helper(input,si,mid-1,element);
   }
  else{
    return helper(input,mid+1,ei,element);
  }
   
}

int binarySearch(int input[], int size, int element) {
    // Write your code here
 return helper(input,0,size-1,element);
}
