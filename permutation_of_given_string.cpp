#include<bits/stdc++.h>
using namespace std;

void printPermutations(string str, string ans)
    {
  
        // If string is empty
        if (str.length() == 0) 
        {
            cout<<ans<<endl;
            return;
        }
  
        // Make a boolean array of size '26' which stores true 
        // at the position in which alphabet is being used
        
        bool alpha[26];
  
        for (int i = 0; i < str.length(); i++) {
  
            char ch = str.at(i);
  
            // the string after excluding the ith character
            string ros;
            ros = str.substr(0, i) + str.substr(i + 1);
  
            // If the character has not been used 
            // then a recursive call will take place. 
            // Otherwise, there will be no recursive
            // call
            if (alpha[ch - 'a'] == false)
                printPermutations(ros, ans + ch);
            alpha[ch - 'a'] = true;
        }
    }
int main()
{
    string s = "aabc";
    string ans = "";

    //Empty Input String
    if(s.length()==0)
    {
        cout<<"No Permutations Possible!!";
    }
    else
        printPermutations(s, ans);
    return 0;
}
