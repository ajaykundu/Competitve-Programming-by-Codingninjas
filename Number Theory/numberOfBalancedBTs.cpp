
#define mod 1000000007

int balancedBTs(int h) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return the output and don’t print it.
  */
    
   if(h==1)
   {
     return 1;
   }
  if(h==2)
  {
    return 3;
  }
  
  long long l1=balancedBTs(h-1);
  long long l2=balancedBTs(h-2);
  
  return   ((2*l1*l2)%mod + (l1*l1)%mod)%mod;
   
}
