// Array with Spaces into Normal array;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ArrayInput;
    getline(cin,ArrayInput);
    
    stringstream ArrayObj(ArrayInput);
    
    vector<int> OutputArray;
    int tempInt;
    
    while(ArrayObj >> tempInt)
    {
        OutputArray.push_back(tempInt);
    }
    
    for(int i:OutputArray)
    {
        cout<<i<<endl;
    }
}
