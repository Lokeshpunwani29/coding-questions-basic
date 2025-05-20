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

/*#include<iostream>
using namespace std;

bool checkPrime(int num)
{
    if(num<2) return false;
    if(num==2) return true;
    if(num%2==0) return false;
    for(int i=3; i*i<num; i+=2)
    {
        if(num%i==0) return false;
    }
    return true;
}

int main()
{
    int num;
    cin>>num;
    bool result = checkPrime(num);
    if(result) cout<<"Prime";
    else cout<<"Not Prime";
    return 0;
}*/
