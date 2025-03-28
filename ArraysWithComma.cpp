// Array with Commas into Normal array;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ArrayInput;
    getline(cin,ArrayInput);
    
    stringstream ArrayObj(ArrayInput);
    
    vector<int> OutputArray;
    string tempString;
    
    while(getline(ArrayObj, tempString,','))
    {
        int tempInt = stoi(tempString);
        OutputArray.push_back(tempInt);
    }
    
    for(int i:OutputArray)
    {
        cout<<i<<endl;
    }
}
