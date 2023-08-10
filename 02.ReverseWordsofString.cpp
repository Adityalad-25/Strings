/*
link -> https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example 1:

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
       string s;stack<string>st;
       for(int i = 0;i<S.size();i++){
           if(S[i]!='.')
           {
               s+=S[i];
           }
           if(S[i]=='.'){
               st.push(s);
               s="";
           }
       }
       // last word gets missed as it gets only added in s but not pushed in the stack
       st.push(s);
       
       string ans="";
       while(!st.empty()){
           string str = st.top();
           st.pop();
           ans+=str+".";
       }
       
       ans.pop_back(); //removing last appended '.'
       return ans;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
