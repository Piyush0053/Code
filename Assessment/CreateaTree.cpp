#include <bits/stdc++.h>
using namespace std;

// Definition of Tree Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to create Binary Tree from level order
TreeNode* createTree(const vector<int>& levelOrder) {
    if (levelOrder.empty() || levelOrder[0] == -1) return NULL;

    // Create the root
    TreeNode* root = new TreeNode(levelOrder[0]);
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (i < levelOrder.size()) {
        TreeNode* curr = q.front();
        q.pop();

        // Add left child
        if (levelOrder[i] != -1) {
            curr->left = new TreeNode(levelOrder[i]);
            q.push(curr->left);
        }
        i++;

        // Add right child
        if (i < levelOrder.size() && levelOrder[i] != -1) {
            curr->right = new TreeNode(levelOrder[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

void displayAns(vector<int> temp){
    for(auto i: temp){
        cout<<i<<" ";
    }
    cout<<endl;
}

void printnodes(TreeNode* root, vector<int> temp){
    if(root==NULL)return;

    int ele=root->val;
    temp.push_back(ele);
    if(root->left==NULL && root->right==NULL){
        displayAns(temp);
    }

    printnodes(root->left,temp);
    printnodes(root->right,temp);

} 

int main() {
    vector<int> levelOrder = {1, 2, 3, 4, 5, -1, -1};
    TreeNode* root = createTree(levelOrder);

    vector<int> temp;
    printnodes(root,temp);
    return 0;
}
    