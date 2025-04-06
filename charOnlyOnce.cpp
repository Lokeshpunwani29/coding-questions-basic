#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    char temp;
    int count;
    for(int i=0; i< str.length(); i++)
    {
        count = 0;
        temp = str[i];
        for(int j=0; j < str.length(); j++)
        {
            if(temp == str[j])
            {
                if(count == 0) count++;
                else str[j] = '\0';
            }
        }
    }
    cout<<"String is: "<<str<<endl;
}

// Optimised Code
/*
#include <iostream>
#include <unordered_set> // For storing seen characters efficiently
using namespace std;

int main() {
    string str, result;
    getline(cin, str); // Read the full input string including spaces

    unordered_set<char> seen; // To store characters we've already encountered

    for (char c : str) {
        // If the character hasn't been seen before, add it to the result
        if (seen.find(c) == seen.end()) {
            result += c;          // Append to result string
            seen.insert(c);       // Mark this character as seen
        }
        // Else, it's a duplicate – skip it
    }

    cout << "String is: " << result << endl; // Output the result string without duplicates
    return 0;
}
*/
