#include<bits/stdc++.h>
using namespace std;
class solution{
public:

    vector<string> getTokens(string s){
        vector<string> result;
        stringstream ss(s);
        string t ="";
        while(getline(ss,t,'.')){
            result.push_back(t);
        }
        return result;
    }
    int compareVersion(string version1, string version2) {
        vector<string> s1= getTokens(version1);
        vector<string> s2= getTokens(version2);
        int n= s1.size();
        int m= s2.size();
        int i;
        while(i<m || i<n){
            int a= i<n ? stoi(s1[i]) : 0;
            int b= i<m ? stoi(s2[i]) : 0;

            if(a<b)
                return -1;
            if(a>b)
                return 1;
            else i++;
        }
        return 0;
    }
};

int main(){
    solution ob;
    string version_1="1.01";
    string version_2="1.001";
   int r= ob.compareVersion(version_1,version_2);
   cout<< r;
    return 0;
}


// Given two version numbers, version1 and version2, compare them.

// Version numbers consist of one or more revisions joined by a dot '.'.
//  Each revision consists of digits and may contain leading zeros. Every revision contains at least one character. 
//  Revisions are 0-indexed from left to right, with the leftmost revision being revision 0, the next revision being revision 1, and so on. 
//  For example 2.5.33 and 0.1 are valid version numbers.

// To compare version numbers, compare their revisions
//  in left-to-right order. Revisions are compared using their 
//  integer value ignoring any leading zeros. This means that 
//  revisions 1 and 001 are considered equal. If a version number
//   does not specify a revision at an index, then treat the revision
//    as 0. For example, version 1.0 is less than version 1.1 because
//     their revision 0s are the same, but their revision 1s are 0 
//     and 1 respectively, and 0 < 1.
