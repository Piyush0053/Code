#include<bits/stdc++.h>
using namespace std;
bool canTransform(string start, string target) {
    

    // Check positions for valid transformations
    int i = 0, j = 0;
    while (i < start.length() && j < target.length()) {
        // Skip blanks in both strings
        while (i < start.length() && start[i] == '_') i++;
        while (j < target.length() && target[j] == '_') j++;

        // If one index goes out of bounds, stop
        if (i >= start.length() || j >= target.length()) break;

        // Ensure 'L' moves left and 'R' moves right
        if (start[i] != target[j] || 
            (start[i] == 'L' && i < j) || 
            (start[i] == 'R' && i > j)) {
            return false;
        }

        i++;
        j++;
    }
    return true;
}
int main(){
   string start = "R_L_";
   string target = "__LR";

    // int i=0;
    // int j=start.length()-1;
    // while(i<=j){
    //     if((start[i]=='_' && start[i+1]=='L') || (start[j]=='_' && start[j-1]=='R')|| (start[i]=='R' && start[i+1]=='_') || (start[j]=='L' && start[j-1]=='_')){
    //         swap(start[i],start[i+1]);
    //         swap(start[j],start[j-1]);
    //         i++;
    //         j--;
    //     }
    //     else if((start[i]=='R' && start[i+1]=='_') || (start[j]=='L' && start[j-1]=='_')){
    //         swap(start[i],start[i+1]);
    //         swap(start[j],start[j-1]);
    //         i++;
    //         j--;
    //     }
    //     else if(start[i]=='R' && start[j]=='_'){
    //         swap(start[i],start[j]);
    //         i++;
    //         j--;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    // if(start==target){
    //     cout<<"TRUE";}else{
    //         cout<<"false";
    //     }
    if (canTransform(start, target)) {
        cout << "TRUE";
    } else {
        cout << "FALSE";
    }

}