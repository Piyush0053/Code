#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> nums{3,4,1,2,6};
    vector<vector<int>> queries={{0,4}};
    
    for(int i=queries[0][0];i<queries[0][1];i++){
         if((nums[i-1]%2==0 && nums[i]%2==0)|| nums[i-1]%2==1 && nums[i]%2==1){
            cout<<"false";
            break;
            }
        }
       
       cout<<"true";
    }