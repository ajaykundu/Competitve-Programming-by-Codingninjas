#include<iostream>
using namespace std;

class Triplet{
public:
  int gcd;
  int x;
  int y; 
  Triplet gcdExtended(int a,int b)
  {
    cout<<a<<" "<<b<<endl;
     if(b==0)
     {
        Triplet ans;
        ans.gcd = a;
        ans.x = 1;
        ans.y = 0;
        return ans;

     }

    Triplet smallOutput=gcdExtended(b,a%b);

    Triplet answer;
    answer.gcd=smallOutput.gcd;
    answer.x = smallOutput.y;
    answer.y = smallOutput.x - (a/b)*(smallOutput.y);
    return answer;
  }
};


int main(int argc, char const *argv[])
{
  Triplet o ;
   o=o.gcdExtended(10,12);

  cout<<o.gcd<<endl;
  cout<<o.x<<endl;
  cout<<o.y<<endl;
  return 0;
}