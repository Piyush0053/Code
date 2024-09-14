#include <iostream>
using namespace std;
int main(){
for(int i=1;i<8;i++){
    for(int j=1;j<8-i-1;j++){
        if(i%2==0){
            continue;
        }
        else{
cout<<" ";
        }
        
    }

for(int j=1;j<i;j++){
    if(i%2==0){
        continue;
    }
    else{
        cout<<"*";
    }
}
cout<<endl;
return 0;
}



}
