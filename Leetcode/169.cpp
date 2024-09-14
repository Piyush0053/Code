#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums{2,2,1,1,1,2,2};
    unordered_map<int, int> hash;

    for(auto i: nums){
        hash[i]++;
    }
    int min= INT_MAX;
    for(auto i: hash){
        if(i.second> (nums.size()/2)){
            if(i.second>min){
                min=i.second
            }
            if((i.first)%2==0)
            cout<<i.first;
        }
    }


    return 0;
}