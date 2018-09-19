
void merge(int input[],int si,int mid,int ei)
{
    int arr[ei-si+1];
  
    int i=si;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=ei)
    {
        if(input[i]<=input[j])
        {
          arr[k]=input[i];
          i++;
          k++;
        }
      else{
        arr[k]=input[j];
        j++;
        k++;
      }
    }
   
  while(i<=mid)
  {
    arr[k]=input[i];
    k++;
    i++;
  }
  while(j<=ei)
  {
    arr[k]=input[j];
    k++;
    j++;
  }
  
  for(int tu=si,k=0;tu<=ei;tu++)
  {
    input[tu]=arr[k];
    k++;
  }
    
}

void mergeSortHelper(int input[],int si,int ei)
{
     if(si>=ei)
     {
       return;
     }
  int mid=(si+ei)/2;
  mergeSortHelper(input,si,mid);
  mergeSortHelper(input,mid+1,ei);
  merge(input,si,mid,ei);
}

void mergeSort(int input[], int size){
	// Write your code here
        mergeSortHelper(input,0,size-1);
}
