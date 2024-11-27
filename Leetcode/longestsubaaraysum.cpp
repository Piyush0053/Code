#include<bits/stdc++.h>
using namespace std;
int main(){ 
    vector<int> arr{10, 5, 2, 7, 1, 9};
    int k=15;
 
 int sum=0;
    int count=0;
    vector<int> ans;
    int t=0;
    int j=0;

    for(int i=0;i<arr.size();i++){

        sum+=arr[i];
        count++;
        if(sum==k){
            ans.push_back(count);
        }
        if(sum>k){
            count=0;
            sum=0;
            j++;
        }
    }

    for(int i=0;i<ans.size();i++){
        t= max(t,ans[i]);
    }
    cout<<t;
}