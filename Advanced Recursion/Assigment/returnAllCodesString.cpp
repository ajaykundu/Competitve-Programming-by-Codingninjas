/*

Return all codes - String
Send Feedback
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to return the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. And input string does not contain 0s.
Input format :
A numeric string
Constraints :
1 <= Length of String S <= 10
Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw

*/

#include <string.h>
#include<iostream>
using namespace std;

char getKey(int num)
{

    return (char)(96+num);
}


void helper(string input,string output[10000],int &k,string out="")
{
    if(input[0]==0)
    {
      output[k]=out;
      k++;
      return;
    }
  
  helper(input.substr(1),output,k,out+getKey(input[0]-48));
   
   if(input[1]!=0 && ((input[0]-48)*10 + (input[1]-48))<=26)
   {
     helper(input.substr(2),output,k,out+getKey((input[0]-48)*10 + (input[1]-48)));
   }
}

int getCodes(string input, string output[10000]) {
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */
  int k=0;
  helper(input,output,k);
  return k;
}

