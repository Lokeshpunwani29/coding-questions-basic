#include<iostream>
using namespace std;
int main()
{
  int num,index,flag=1;
  cout<<"Enter the Number: ";
  cin>>num;

  if(num==0 || num==1) flag=0; //As 0 and 1 are not prime Numbers;

  for(index=2; index<=num/2; index++)
  {
    if(num%index==0)
    {
      flag = 0;
      break;
    }
  }
if(flag==1) cout<<"Number is Prime."<<endl;
else cout<<"Number is not Prime."<<endl;

return 0;
}