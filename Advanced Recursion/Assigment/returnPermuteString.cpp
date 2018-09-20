
/*

Return Permutations - String
Send Feedback
Given a string S, find and return all the possible permutations of the input string.
Note 1 : The order of permutations is not important.
Note 2 : If original string contains duplicate characters, permutations will also be duplicates.
Input Format :
String S
Output Format :
All permutations (in different lines)
Sample Input :
abc
Sample Output :
abc
acb
bac
bca
cab
cba

*/

#include <string>
using namespace std;


string swapstr(string str,int i,int j)
{
   char temp=str[i];
  str[i]=str[j];
  str[j]=temp;
  return str;
}

int returnPermutations(string input, string output[]){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
  
  if(input[0]==0)
  {
    output[0]="";
    return 1;
  }
  
  int smalloutput = returnPermutations(input.substr(1),output);
  int len=input.length();
  int i=0;
  for(;i<smalloutput;i++)
  {
      output[i]=input[0]+output[i];
  }
  
   int k=smalloutput;
  
  for(i=0;i<smalloutput;i++)
  {
     for(int j=1;j<(len);j++)
     {
        output[k]=swapstr(output[i],0,j);
       k++;
     }
  }
  
  
    
  return len*smalloutput;
}
