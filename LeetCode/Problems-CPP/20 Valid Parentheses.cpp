//Time Taken(%): 0ms
//Memory usage(%): 6.7MB
//Your Name(optional):nitinvinayak
// Your solution here
#include <bits/stdc++.h>
#include <string.h>
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int n=s.length();
        for(int i=0;i<n;i++){
            if (s[i]=='('|| s[i]=='{'|| s[i]=='['){
                stk.push(s[i]);
            }
            else{
                if (!stk.empty() && 
                    (stk.top()=='(' && s[i]==')'
                    || stk.top()=='{'  && s[i]=='}' 
                    || stk.top()=='[' &&s[i]==']' )  ){
                    stk.pop();
                    continue;
                }
                return false;
            }
                 
        }
        if (stk.empty())
            return true;
        return false;
    }
};