/*
Input: 101
Output: Yes
Explanation: In 101, the 0 can be flipped
             to make it all 1
Input: 11
Output: No
Explanation: No matter whichever digit you 
  flip, you will not get the desired string.
Input: 1
Output: Yes
Explanation: We can flip 1, to make all 0's
#include <bits/stdc++.h>
*/
using namespace std;
 
bool canMakeAllSame(string str)
{
    int zeros = 0, ones = 0;
 
    for (char ch : str)
        (ch == '0') ? ++zeros : ++ones;
     return (zeros == 1 || ones == 1);
}
 
// Driver code
int main()
{
    canMakeAllSame("101") ? printf("Yes\n") : printf("No\n");
    return 0;
}
