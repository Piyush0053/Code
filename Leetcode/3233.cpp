#include<bits/stdc++.h>
using namespace std;

void solve(int l, int&r, int&count){
    if(l>r)return ;

    int sub_count=0;
    for(int i=1;i<l;i++){
        if(sub_count>2)break;
        if(l%i==0)sub_count++;
    }
    if((sub_count<2) ||(sub_count>2))count++;

   return solve(l+1,r,count);
    
}

int main(){

    int l= 3693;
    int r= 85366;
    int count=0;
    solve(l,r,count);
    cout<<"nm"<<count;


    return 0;
}