#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{45, 67, 29, 76, 88, 85, 8, 70, 45, 67, 29, 76, 88, 85, 8, 70};
    int k = 76;

    int sum = 0;
    int count = 0;
    vector<int> ans;
    
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        count++;
        
        // If sum matches k, record the subsequence length
        if (sum == k) {
            ans.push_back(count);
        }
        
        // If sum exceeds k, reset the sum and count
        if (sum >= k) {
            sum = 0;
            count = 0;
        }
    }

    // Find the maximum subsequence length
   int t=0;
   for(int i=0;i<ans.size();i++){
    t= max(t, ans[i]);
   }
    cout << t << " ";
}
