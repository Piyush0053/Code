#include<bits/stdc++.h>
using namespace std;

void eliminate(vector<int>& arr , int j){
    if(arr.size()==1)return ;

     vector<int> newArr;

        // L TO R
        if (j % 2 != 0) {
            for (int i = 1; i < arr.size(); i += 2) {
                newArr.push_back(arr[i]);
            }
        } 
        // R TO L
        else {
            for (int i = arr.size() - 2; i >= 0; i -= 2) {
                newArr.push_back(arr[i]);
            }
            // Reverse the newArr to maintain the order
            reverse(newArr.begin(), newArr.end());
        }

        arr = newArr;
        eliminate(arr, j + 1);

}
int main(){

   int n=9;
   vector<int> arr;
   for(int i=1;i<=n;i++){
    arr.push_back(i);
   }
   int j=1;
   eliminate(arr,j);
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   }


    return 0;
}