#include <iostream>
#include <string>
#include <stack>
using namespace std;

string removeKDigits(string num, int k) {
    stack<char> st;
    
    // Greedily remove larger digits
    for (char c : num) {
        // Pop the stack if the current digit is smaller
        while (!st.empty() && k > 0 && st.top() > c) {
            st.pop();
            k--;
        }
        st.push(c);
    }
    
    // If k > 0, remove from the end of the number
    while (k > 0) {
        st.pop();
        k--;
    }
    
    // Build the result from the stack
    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    
    // Remove leading zeros
    int i = 0;
    while (i < result.size() && result[i] == '0') i++;
    result = result.substr(i);
    
    // If result is empty, return "0"
    return result.empty() ? "0" : result;
}

int main() {
    string S;
    int K;
    
    // Input
    cin >> S;
    cin >> K;
    
    // Output the smallest possible number
    cout << removeKDigits(S, K) << endl;
    
    return 0;
}
