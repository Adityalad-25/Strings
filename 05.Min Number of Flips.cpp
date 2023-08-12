// link -> https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
/*
Given a binary string, that is it contains only 0s and 1s. We need to make this string a sequence of alternate characters by flipping some of the bits, our goal is to minimize the number of bits to be flipped.
Example 1:
Input:
S = "001"
Output: 1
Explanation: 
We can flip the 0th bit to 1 to have
101.
Example 2:
Input:
S = "0001010111" 
Output: 2
Explanation: We can flip the 1st and 8th bit 
bit to have "0101010101"
101.
*/
#include<bits/stdc++.h>
using namespace std;

char flip(char ch) { return (ch == '0') ? '1' : '0'; }
 
int getFlipWithStartingCharcter(string str, char expected)
{
    int flipCount = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != expected)
            flipCount++;
        expected = flip(expected);
    }
    return flipCount;
}
 

int minFlips (string str)
{
   return min(getFlipWithStartingCharcter(str, '0'), getFlipWithStartingCharcter(str, '1'));
}

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
