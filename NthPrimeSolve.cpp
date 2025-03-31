#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int num)
{
    if(num<2) return false;
    if(num==2) return true;
    if(num%2==0) return false;
    
    for(int i = 3; i*i<=num; i+=2)
    {
        if(num%i==0) return false;
    }
    return true;
}
int getPrime(int n)
{
    int count = 0, num = 1;
    while(count<n)
    {
        num++;
        if(checkPrime(num)) count ++;
    }
    return num;
}
int main()
{
    int X,Y;
    cin>>X;
    cin>>Y;
    int A = getPrime(X);
    int B = getPrime(Y);
    int C = (A*B) - 1;
    cout<<"C = AxB - 1 = "<<C<<" = "<<A<<" x "<<B<<" - 1"<<endl;
}
