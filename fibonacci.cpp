#include <iostream>
using namespace std;
int main()
{
    int num, t1=0, t2=1, nxt;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        cout<<t1<<" ";
        nxt = t1 + t2;
        t1 = t2;
        t2 = nxt;
    }
    return 0;
}
