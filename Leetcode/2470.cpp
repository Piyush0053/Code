#include<bits/stdc++.h>
using namespace std;

    int gcd(int a, int b){
        if(a==0)return b;
        if(b==0)return a;
        else{
            return gcd(b, a%b);
        }
    }

    void solveLCM(vector<int>&storeLcm, int&k, int&count){
       
        int ans = storeLcm[0];
        for (int i = 0; i < storeLcm.size(); i++)
        ans = (((storeLcm[i] * ans)) /
                (gcd(storeLcm[i], ans)));

        if(ans==k)count++;
    }

    void printsubarray(vector<int>& nums,  int start, int end, int&k, int&count){
        if(end==arr.size()){
            return;
        }
        vector<int>storeLcm;

        for(int i=start; i<=end;i++){
            storeLcm.push_back(nums[i]);
            
        }
        
        
        solveLCM(storeLcm, k , count );
       
        printsubarray(nums, start, end+1, k,count);

    }


    void subarray(vector<int>&nums , int&k, int&count){
        for(int start=0;start<nums.size();start++){
            int end= start;
            printsubarray(nums, start, end, k, count);
        }
    }

int main(){

    // int a=3;
    // int b=9;
    // int ans =0;
    int k=2;
    int count=0;
    vector<int> nums{3};
    subarray(nums,k, count );
    cout<<count;
    // solveLCM(a, b, ans);
    // cout<<ans;

    return 0;
}