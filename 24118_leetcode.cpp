#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<string>sortPeople(vector<string>&names, vector<int>&heights) {

        vector<pair<int,string>>pair ;
        for(int i=0 ;i<names.size();i++){
            pair.push_back({heights[i],names[i]});
        }
        
        sort(pair.begin(),pair.end());

        vector<string>ans ;
         for(int i=names.size()-1;i>=0;i--){
             ans.push_back(pair[i].second);
             
        }
        return ans;
    }
};

int main(){

    int siz ;cin>>siz ;


    vector<string>names ;
    vector<int>heights ;

    for(int i=0 ;i<siz ;i++){
        string s ;cin>>s ;
        names.push_back(s);
    }
    for(int i=0 ;i<siz ;i++){
        int a;cin>>a ;
        heights.push_back(a);
    }

    Solution su;

    vector<string> ans= su.sortPeople(names,heights);

    for(int i=0 ;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0 ;
}