#include<iostream>
using namespace std;
int main(){
int marks;
  // nested if else
  cin>>marks;
if(marks>=90){
  cout<<"A grade";
}
else{
  if(marks>=80){
    cout<<"B grade";
  }
  else{
    if(marks>=60){
      cout<<"C grade";
    }
    else{
      if(marks>=40){
        cout<<"D grade";
      }
      else{
         cout<<" E grade";
      }
    }
  }
} 
}






