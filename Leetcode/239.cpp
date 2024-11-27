#include<bits/stdc++.h>
using namespace std;

    void slidingwidow(vector<int>& arr, int n, int k, vector<int>& ans){
        
        deque<int> q;

        // first insert K -ve elements
      
        for(int i=0;i<k;i++){
           while(!q.empty() && arr[i]>arr[q.back()]){
                q.pop_back();

                // insert element
           }
                q.push_back(i); 
        }
    //    store ans for first window
        ans.push_back(arr[q.front()]);

        // Now iterate from k+1 remaining windows
        for(int i=k;i<n;i++){
         
            // removal of starting index from queue so that we can insert new index
            // pop front wale elements ka hoga

            while( !q.empty() &&(i-k>=q.front())){
                q.pop_front();
            }
       
            // insertion of new index
             while(!q.empty() && arr[i]>=arr[q.back()]){
                q.pop_back();
                // insert element
                }
                q.push_back(i); 

            ans.push_back(arr[q.front()]);
        }
       

    }


int main(){

    vector<int> arr{1,3,1,2,0,5};
    int n= arr.size();
    int k=3;
    vector<int> ans;
    slidingwidow(arr,n,k,ans);

    for(auto i: ans){
        cout<<i<<" ";
    }

}