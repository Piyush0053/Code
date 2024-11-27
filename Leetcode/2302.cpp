#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> nums{1,1,1};
long long k=5;
        long long sum=0;
        long long count=0;
        long long ans=0;
        int start=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            count=count+1;
            
           
            while(sum*count>=k){
                sum-=nums[start];
                start++;
                count--;
            }
           ans+=count;
        }      
        cout<<ans<<endl;

}