#include<bits/stdc++.h>
using namespace std;

   
   void solve(vector<int>& nums,vector<int>& ans, int i,int& n ){
        if(i>=n)return;

        int j=0;
        int sum=1;
        while(j<n){
            if(i!=j){
                sum=sum*nums[j];
            }
           
            j++;
        }
        ans.push_back(sum);
        solve(nums,ans,i+1,n);
    }
int main(){
    vector<int> nums = {1,2,3,4};
        int n=nums.size();
        vector<int> ans;
        int i=0;
        solve(nums,ans,i,n);
        for(auto i: ans){
            cout<<i;
        }
    // vector<int> ratings{1,2,3,5,4,3,2,1,4,3,2,1};
    //     int n = ratings.size();
    

    //     vector<int> candies(n,1);

    //     for(int i=1;i<n;i++){
    //         if(ratings[i]>ratings[i-1]){
    //             candies[i]=candies[i-1]+1;
    //             }
    //             cout<<"1:"<<candies[i]<<endl;
    //             if(ratings[n-i-1]>ratings[n-i]){
    //                 candies[n-i-1]=max(candies[n-i-1],candies[n-i]+1);
    //             }
    //             cout<<"2:"<<candies[i]<<endl;
            
        // }
        // for(int i=n-2;i>=0;i--){
        //     if(ratings[i]>ratings[i+1]){
        //         candies[i]=candies[i];
        //     }
        // }
        // int sum=0;
        // for(auto i: candies){
        //     sum+=i;
        // }

        // cout<< sum;
}
