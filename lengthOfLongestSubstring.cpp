/**************************************************************
 * Given a string, find the length of the longest substring without repeating characters.

 * Examples:
 * Given "abcabcbb", the answer is "abc", which the length is 3.
 * Given "bbbbb", the answer is "b", with the length of 1.
 * Given "pwwkew", the answer is "wke", with the length of 3.
 * Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
**************************************************************/

#include "interface.h"

// use a ptr to get new char into tmp string,while it is not contained in tmp
// if char is contained,over a tmp,and get the greater between tmp length and result
// traverse the input string
int lengthOfLongestSubstring(string s) {
    if(s.empty())
        return 0;
    if(s.size() == 1)
        return 1;
    int result = 0;
    int i = 0;
    string tmp;
    cout<<s.size()<<endl;
    while(i < (int)s.size()){
        cout<<"count: "<<i + 1<<endl;
        int ptr = i;
        while(tmp.find(s[ptr]) > tmp.length()){
            //cout<<ptr<<endl;
            tmp += s[ptr];
            cout<<"tmp is "<<tmp<<endl;
            if(ptr < s.length() - 1){
                ++ptr;
            }
            else
                break;
        }
        result = (int)tmp.size() > result ? (int)tmp.size():result;
        tmp.clear();
        ++i;
    }

    return result;
}

