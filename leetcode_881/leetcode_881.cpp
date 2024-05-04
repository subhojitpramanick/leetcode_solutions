#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
     int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int boats=0;
        int l=0;
        int h=people.size()-1;
        while(l<=h){
            if(people[l]+people[h]<=limit){
                l++;
            }
            h--;
            boats++;
        }
        return boats;
    }
};
int main(){
  

    vector<int> people;
    cout<< "enter weight of people: "<< endl;
    people.push_back(3);
    people.push_back(2);
    people.push_back(2);
    people.push_back(1);

    // int temp;
    // for(int i=0;i<n;i++){
    //     cin>>  temp;
    //      people.push_back(temp);
    // }
    cout<< "enter the limit: ";
    int limit;
    cin>> limit;
    Solution on;
    int ans=on.numRescueBoats(people,limit);
    cout<< ans << endl;
  return 0;
}