#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums1={1,2,3,0,0,0};
     int m;
      vector<int> nums2{2,5,6};
       int n;
        int i= 0;
        int j=0;
       
        vector<int> arr;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                arr.push_back(nums1[i]);
            }
            else{
                arr.push_back(nums2[j]);
            }
            i++;
            j++;
        }
        for(int j=0;j<arr.size();j++){
            nums1[j]=arr[j];
        }
        for(auto i : nums1){
            cout<<i<<" ";
        }
        return 0;

}