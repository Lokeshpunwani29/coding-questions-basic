#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  string name,rev;
  cout<<"Enter the String: ";
  getline(cin,name);
  for(int i=name.length()-1;i>=0;i--)
  {
    rev=rev+name[i]; //in rev string we put each char of name string from last index.
  }
  if(name==rev) cout<<"String is Pallindrome"<<endl;
  else cout<<"String is not Pallindrome"<<endl;
  return 0;
}