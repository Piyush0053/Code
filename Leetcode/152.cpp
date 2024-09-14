#include<bits/stdc++.h>
using namespace std;


int lcm(int a, int b) {
        return (a * b);
    }

int main(){

     

    vector<int> nums{-2,0,-1};
        int max = INT_MIN;
        int n = nums.size();
        
        for(int start = 0; start < n; ++start) {
            int currenmul = 1;
            
            for(int end = start; end < n; ++end) {

                // first calculate and store LCM of two values and then store it and then further calculate and store value
                currenmul = lcm(currenmul, nums[end]);
                
                if (currenmul > max) {
                    max=currenmul;
                } 
            }

        
        } 
        cout<<max;
      


    return 0;
}