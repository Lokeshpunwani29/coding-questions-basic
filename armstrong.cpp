#include<iostream>
using namespace std;
int main()
{
  int num,tempNum,rem,sum=0;
  cout<<"Enter the Number: ";
  cin>>num;
  tempNum = num;
  while(tempNum>0)
  {
    rem = tempNum%10;
    tempNum = tempNum/10;
    sum = sum + rem*rem*rem;
  }
  if(num==sum) cout<<"Number is Armstrong.";
  else cout<<"Number is not Armstrong";
  return 0;
}