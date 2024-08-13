//Here lowerCase and upperCase are considered different.
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str; //string Declaration
    int count;// count for occurences
    char tempChar; // storing current char in loop
    cout<<"Enter the String: ";
    getline(cin,str); // getline() to avoid spaces
    int len = str.length(); //length of input string 
    for(int i=0;i<len;i++)
    {
        if(str[i]!=32) //32 represents " "
        {
        count = 0;
        tempChar = str[i];
        for(int j=0;j<len;j++)
        {
            if(str[j]==tempChar)
            {
            count++;
            str[j] = 32; //putting already counted character as space.
            }
        }
        cout<<"Character "<<tempChar<<" occured "<<count<<" times."<<endl;
        }
    }
    cout<<str;
    return 0;
}