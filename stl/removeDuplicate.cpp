#include<iostream>
#include<vector>
#include<map>
using namespace std;


vector<int> removeDuplicates(vector<int> input){

    // Write your code here
  
  map<int,int> m;
  for(int i=0;i<input.size();i++)
  {
      if(m.find(input[i])==m.end())
      {
        m[input[i]]=1;
      }
  }
  
  map<int,int>::iterator itr;
  
  vector<int> v;
  
  for(itr=m.begin();itr!=m.end();itr++)
  {
    v.push_back(itr->first);
  }
    return v;
}


