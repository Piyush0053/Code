#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{10,10,10};

    // int maxi=0;
    // for(auto i:arr){
    //     maxi=max(maxi, i);
    // }
    // int diff=0;
    // int ans=INT_MAX;

    // unordered_map<int,int> mp;
    // for(auto i: arr){
    //     diff=maxi-i;
    //     if(diff!=0){  
    //     mp.insert(make_pair(diff,i));
    //     }
    // }
    // for(auto i:mp){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // for(auto i:mp){
    //     if(i.first< ans){
    //         ans=i.first;
            
    //     }
        
    // }
    // if(ans==INT_MAX){
    //     cout<<"-1"<<endl;
    // }
    // else{
    // cout<<mp[ans];}
     

    //  Approach 2
    int largest=-1;
    int secondlargest=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    cout<<secondlargest<<endl;

}