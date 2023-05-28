// You are using GCC
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int l = s.length();
        double num=0;
        int i=0;
        while(s[i]==' ') // runs until there is a space in the beginning
        {
            i++;
        }

        bool isneg = (s[i]=='-')? true : false;//checks positive or negative integer
        bool ispos = (s[i]=='+')? true : false;
        if(isneg || ispos){
            i++;
        }

        while(i<l && s[i]>='0' && s[i]<='9') // until the index(i) is less than the length of the string
        {
            int digit = s[i] - '0'; // converts string to integer
            num = num*10 + digit;
            i++;
        }
        
        num = isneg ? -num : num;
        num = (num>INT_MAX)?INT_MAX : num;
        num = (num<INT_MIN)?INT_MIN : num;
        return (int)num;
    }
};
int main()
{
    Solution s;
    string st;
    cin>>st;
    int v = s.myAtoi(st);
    cout<<v;
}