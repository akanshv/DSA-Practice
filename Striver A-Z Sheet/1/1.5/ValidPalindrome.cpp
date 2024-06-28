// https://leetcode.com/problems/valid-palindrome/submissions/

#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        if(n==0)
        return true;

        bool rev=recursive(0,n-1,s);
        return rev;
    }

public:
    bool recursive(int i,int n,string&str){
        
        if(n==i) return true;

        if(!isalnum(str[i]))   return recursive(i+1,n,str);

        if(!isalnum(str[n]))   return recursive(i,n-1,str);

        if(tolower(str[i])!=tolower(str[n])){
            return false;
        }

        if(i<n+1)
            return recursive(i+1,n-1,str);

        return true;
    }

};