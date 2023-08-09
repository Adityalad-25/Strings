/*
problem link : - https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=0

Problem Statement
Suggest Edit
You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.
Note :
String 'S' is NOT case sensitive.
Example :
Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.
*/


#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
     int start=0;
       int end=s.size()-1;
    while(start<=end){
     if(!isalnum(s[start])){start++; continue;} // isalnum -> check for alphanumeric
        if(!isalnum(s[end])){end--;continue;}
        if(tolower(s[start])!=tolower(s[end]))return false;
        else{
               start++;
               end--;
           }
       }
       return true;

}
