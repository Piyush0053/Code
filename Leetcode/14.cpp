// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<string> arr{"flower","flow","flight"};
//     string ans;
//     int i=0;
//     while(true){
//         char curr_ch=0;
//         for(auto str: arr){
//             if(i>=str.length()){
//                 curr_ch=0;
//                 break;
//             }
//             if(curr_ch==0){
//                 curr_ch=str[i];
//             }
//             else if(str[i]!=curr_ch){
//                 curr_ch=0;
//                 break;
//             }
//         }
//         if(curr_ch==0)break;

//         ans.push_back(curr_ch);
//         i++;

//     }

//     cout<<ans;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <unordered_map>
// #include <cmath>

// int calculateAbsoluteDifference(std::vector<int>& arr) {
//     int n = arr.size();
    
//     // Step 1: Create ranks
//     std::vector<int> sorted_unique = arr; // Copy the array
//     std::sort(sorted_unique.begin(), sorted_unique.end());
//     sorted_unique.erase(std::unique(sorted_unique.begin(), sorted_unique.end()), sorted_unique.end());

//     std::unordered_map<int, int> rank_map;
//     for (int i = 0; i < sorted_unique.size(); ++i) {
//         rank_map[sorted_unique[i]] = i + 1; // Assign ranks starting from 1
//     }

//     // Get the ranks for the original array
//     std::vector<int> ranks(n);
//     for (int i = 0; i < n; ++i) {
//         ranks[i] = rank_map[arr[i]];
//     }

//     // Step 2: Split the ranks into two halves
//     int mid = n / 2;
//     int sum_first_half = 0;
//     int sum_second_half = 0;

//     for (int i = 0; i < mid; ++i) {
//         sum_first_half += ranks[i];
//     }
//     for (int i = mid; i < n; ++i) {
//         sum_second_half += ranks[i];
//     }

//     // Step 3: Calculate the absolute difference
//     return std::abs(sum_first_half - sum_second_half);
// }

// int main() {
//     std::vector<int> array = {10, 50,60 , 30, 20, 40};
//     int result = calculateAbsoluteDifference(array);
//     std::cout << "Absolute difference: " << result << std::endl;
//     return 0;
// }
 
// 


// Find sum of XOR of all the elements of the subsets of the set of all whole numbers upto N.
 #include <iostream>
#include <cmath>

long long sumOfXorUptoN(int N) {
    long long totalXorSum = 0;

    // Iterate over each bit position
    for (int i = 0; i < 32; ++i) {
        // Calculate the count of numbers with i-th bit set
        long long count = (N + 1) / (1 << (i + 1)) * (1 << i);
        count += std::max(0LL, (N + 1) % (1 << (i + 1)) - (1 << i));
        
        // Each bit contributes to the total xor sum
        totalXorSum += count * (1LL << i);
    }

    return totalXorSum;
}

int main() {
    int N;
    std::cout << "Enter a number N: ";
    std::cin >> N;

    long long result = sumOfXorUptoN(N);
    std::cout << "Sum of XOR of all subsets of numbers up to " << N << " is: " << result << std::endl;

    return 0;
}
