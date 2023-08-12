//program for Left Rotation and Right Rotation of a String

#include<bits/stdc++.h>
using namespace std;

void leftrotate(string &s, int d)
{
  int x = s.length(); 
    if(d>x)d%=x;
  // s = "12345" after left rotation by d= 2 -> 34512
    reverse(s.begin(),s.end()); // s = 54321
	reverse(s.begin(),s.begin()+(x-d)); // 34521
	reverse(s.begin()+(x-d),s.end());   // 34512
}

void rightrotate(string &s, int d)
{
    int x = s.length();
    if(d>x)d%=x;
   // s = 12345 after right rotation by d= 2 -> 45123
    reverse(s.begin(),s.end()); // s = 54321
	reverse(s.begin(),s.begin()+d); // s = 45321
	reverse(s.begin()+d,s.end());   // s = 45123
}

int main()
{
	string str1 = "GeeksforGeeks"; 
    //Left Rotation  : "eksforGeeksGe" 
	leftrotate(str1, 2);
	cout << str1 << endl;

	string str2 = "GeeksforGeeks";
    //Right Rotation : "ksGeeksforGee"
	rightrotate(str2, 2);
	cout << str2 << endl;
	return 0;
}
       
         
