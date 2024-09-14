#include<bits/stdc++.h>
using namespace std;
    string find(string s){
    int hash[26]={0};

    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    char max_frq_char;
    int max_frq = INT_MIN ;

    for(int i=0;i<26;i++){
        if(hash[i]>max_frq){
            max_frq=hash[i];
            max_frq_char=i+'a';
        }
    }

    // place max frq char
    int i=0;
    while(max_frq>0 &&i<s.size()){
        s[i]=max_frq_char;
        max_frq--;
        i=i+2;
    }

    if(max_frq!=0)return "..";

    hash[max_frq_char-'a']=0;

    // now place remaining characters
    // for this we  have to set our index size
    for(int i=0;i<26;i++){
        if(hash[i]>0){
        i= i>=s.size()? 1:i;
        s[i]=i+'a';
        hash[i]--;
        i+=2;
        }
    }
    return s;
    }
int main(){

    string s="aaab";
    string ans= find(s);

    cout<<ans;



    return 0;
}

