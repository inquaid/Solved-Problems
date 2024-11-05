#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> mp;
        for(auto &i : edges){
            for(auto j : i){
                mp[j]++;
            }
        }
        for(auto &i: mp){
            if(i.second == edges.size()){
                return i.first;
            }
        }
        return -1;
    }
};