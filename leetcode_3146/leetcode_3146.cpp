#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        
        unordered_map<char,int> mp;

        for(int i=0;i<s.length();i++){
            mp[s[i]]=i;
        }
        int result=0;
        for(int i=0;i<t.length();i++){
            result += abs(mp[t[i]]-i);
        }
        return result;
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    /* this lines of upper code is usally used for making input
        output more efficient.
    */
    string s="abc";
    string t="bac";
    Solution ob;
   int sol= ob.findPermutationDifference(s,t);
   cout<< sol;
    return 0;
}