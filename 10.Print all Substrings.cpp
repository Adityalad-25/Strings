/*
total number of substrings  =  n(n+1)/2 where n is size of string 
if empty string is considered then total substrings are n(n+1)/2 + 1 ;
 */

#include<bits/stdc++.h>
using namespace std;


void subString(string s, int n)  // Time-Complxity -> O(n^3)
{
	for (int i = 0; i < n; i++)
		for (int len = 1; len <= n - i; len++)
			cout << s.substr(i, len) << endl;  // substr -> substring function in string class 
}

void printSubstrings(string str)
{
 
    // First loop for starting index  
    for (int i = 0; i < str.length(); i++) { // Time-Complxity -> O(n^2)
           string subStr;
        // Second loop is generating sub-string
        for (int j = i; j < str.length(); j++) {
              subStr += str[j];
             cout << subStr << endl;
        }
    }
}
 

int main()
{
	string s = "abcd";
	subString(s,s.length()); // -> a b c d ab abc abcd bc bcd cd  total 10 possible -> substrings
	return 0;
}
