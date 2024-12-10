#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> banned{11};
    int n=7;
    int maxSum=50;

    unordered_map<int,int> mp;
    for (int i = 0; i < banned.size(); i++)
    {
       mp[banned[i]]++;
    }
   
    int sum=0;
    int count=0;
    int i=1;
    while(i<=n){
        if(mp.find(i)!=mp.end()){
            i++;
        }else{
            if(sum+i<=maxSum){
                sum+=i;
                count++;
            }
            i++;
        }
    }
    cout<<count;
}