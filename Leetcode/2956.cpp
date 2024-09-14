#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool solve(string&s, int i, int j){
    if(i>j)return true;
    
    if(s[i]!=s[j]){
        return false;
    }
    return solve(s, i+1, j-1);
    
}

int main(){

    string s= "racear";
    int i=0;
    int n = s.length();
    int j=n-1;
   bool ans= solve(s, i,j);
   cout<<ans;

}