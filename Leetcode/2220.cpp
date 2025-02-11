// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string calculate(int n){
string ans="";
    while(n!=0){
        string ch=to_string(n%2);
        ans+=ch;
        n/=2;
        
    }
    reverse(ans.begin(),ans.end());
    
    return ans;
}
int main() {
    int n=10;
    int m=7;
    string ans1= calculate(n);
    string ans2= calculate(m);
    
    int i=ans1.length()-1;
    int j=ans2.length()-1;
    if(i!=j){
        int a =abs(i-j);
        // cout<<a;
        if(i>j){
            while(a--)ans2="0"+ans2;
        }else{
            while(a--)ans1="0"+ans1;  
        }
    }
    
    cout<<ans1<<" "<<ans2;
    

    
    int count=0;
    // while(i>=0){
    //     if(ans1[i]==ans2[j]){
    //         i--;
    //         j--;
    //     }else{
    //         count++;
    //     }
    // }
    cout<<count;
    return 0;
}