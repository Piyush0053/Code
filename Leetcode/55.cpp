#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums,int k){
    if(k==0)return;

    
    int i=nums.size()-2;
    while(i<nums.size()){
        swap(nums[i],nums[i+1]);
        i--;
    }
    solve(nums,k-1);
}

int main(){
    vector<int> nums{1,2,3,4,5,6,7};
    int k=3;

    
    for(auto i: nums){
        cout<<i<<" ";
    }
    
}