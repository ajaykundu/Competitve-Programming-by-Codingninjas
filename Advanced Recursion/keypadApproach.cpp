
/*Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.*/

#include <string>
using namespace std;

string keyVal(int num){
   
  
    string keypadval[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  return keypadval[num];
}

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
  
  if(num==0)
  {
    output[0]="";
    return 1;
  }
  int smalloutput = keypad(num/10,output);
  
   string key = keyVal(num%10);
   int len = key.length();
   
   for(int i=1;i<len;i++)
   {
     for(int j=0;j<smalloutput;j++)
     {
        output[i*smalloutput +j]= output[j]+key[i];
     }
   }
  
  for(int j=0;j<smalloutput;j++)
  {
    output[j]=output[j] + key[0];
  }
   return len*smalloutput;
}
