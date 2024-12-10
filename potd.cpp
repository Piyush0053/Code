#include<bits/stdc++.h>
using namespace std;

int main(){
   string str1 = "zc";
    string str2 = "ad";

     int n=str2.length();
     int i=0;
     int j=0;
     int count=0;
     while(i<str1.length()){
        int num1=str1[i]-'a';
        int num2=str2[j]-'a';
        if(num1==num2){
            i++;
            j++;
            count++;
        }
        else if((num2-num1)==1 ||(num1-num2)==25){
            i++;
            j++;
            count++;
        }else{
            i++;
        }
     }
     if(n==count){
        cout<<"true";
     }
     else{
        cout<<"false";
     }
}