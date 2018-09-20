/*

Print Permutations - String
Send Feedback
Given a string, find and print all the possible permutations of the input string.
Note : The order of permutations are not important. Just print them in different lines.
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

#include <iostream>
#include <string>
using namespace std;

void helper(string input,string output="")
{
    if(input[0]==0)
    {
      cout<<output<<endl;
      return;
      
    }
  
  for(int i=0;i<input.length();i++)
  {
       swap(input[0],input[i]);
    helper(input.substr(1),input[0]+output);
  }
}

void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
  return helper(input);
}
