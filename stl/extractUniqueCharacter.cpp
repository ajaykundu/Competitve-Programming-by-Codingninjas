#include<vector>
#include<map>

char* uniqueChar(char *str){
    // Write your code here
   
     vector<char> v;
  
     map<char,int> m;
  for(int i=0;str[i]!=0;i++)
  {
       if(m.find(str[i])!=m.end())
       {
         
       }
    else{
      v.push_back(str[i]);
       m[str[i]]=1;
    }
  }
  
  int tu=0;
  for(int i=0;i<v.size();i++)
  {
    str[i]=v[i];
    tu=i;
  }
  tu++;
  str[tu]=0;
  
     return str;
}