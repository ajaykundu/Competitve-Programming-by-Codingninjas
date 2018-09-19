#include <iostream>
#include <string>
using namespace std;

string keyVal(int num){  
    string keypadval[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  return keypadval[num];
}

void helper(int num,string output="")
{
    if(num==0)
    {
      cout<<output<<endl;
      return;
    }
  
  
 
  
  string key = keyVal(num%10);
  
  for(int i=0;i<key.length();i++)
  {
      helper(num/10,key[i]+output);
      
  }
  
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
   helper(num);
  
}
