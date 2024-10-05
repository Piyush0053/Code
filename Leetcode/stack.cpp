#include<bits/stdc++.h>
using namespace std;

int main(){

    string s=")()())";
    stack<char> st;
    int count=0;
    
    for(int i=0;i<s.size();i++){

        if(s[i]=='('){ st.push(s[i]);}
        if(s[i]==')' && st.top()=='('){
            count=count+2;
            st.pop();
        }
        if(s[i]==')'){ st.push(s[i]);}

    }
    cout<<count;


    return 0;

}