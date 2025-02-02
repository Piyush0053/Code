// #include <bits/stdc++.h>
// using namespace std;

// class Node{

//     public:
//     int data;
//     Node* next;

//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void insertAttail(Node* &head, Node* &tail, int data){
//     if(head==NULL){
//         Node* newNode = new Node(data);
//         head= newNode;
//         tail=newNode;
//         return;
//     }
//     Node* newnode = new Node(data);
//     tail->next= newnode;
//     tail=newnode;

// }

// Node* subtract(Node* &head1,Node* &head2,Node* &head, Node* &tail){
//     if(head1==NULL&& head2==NULL){
//         return;
//     }
//     if(head1==NULL && head2!=NULL){
//         return head2;
//     }
//     if(head1!=NULL && head2==NULL){
//         return head1;
//     }

    
//     while(ans!=0){
//         int data=ans%10;
//         Node* newNode = new Node(data);
//         tail->next=newNode;
//         tail=newNode;
//         ans/=10;
//     }                                  
// }


// int main(){
//     Node* head1= NULL;
//     Node* tail1= NULL;
    

//     // List 1
//     insertAttail(head1,tail1,1);
//     insertAttail(head1,tail1,0);
//     insertAttail(head1,tail1,0);

//     Node* head2= NULL;
//     Node* tail2= NULL;


//     // List 2
//     insertAttail(head2,tail2,1);
//     insertAttail(head2,tail2,0);
//     insertAttail(head2,tail2,0);


//     Node* head=NULL;
//     Node* tail= NULL;
//     subtract(head1,head2,head,tail);

//     Node* temp= head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

// }


// // Node* bulidTree()
// // {
// //     int data;
// //     cout << "Enter the data" << endl;
// //     cin >> data;
// //     if (data == -1)
// //     {
// //         return NULL;
// //     }
// //     Node *root = new Node(data);
// //     root->left = bulidTree();
// //     root->right = bulidTree();
// //     return root;
// // }

// // void zigzagtraversal(Node *root, vector<vector<int>>& ans, int& count) 
// // {
// //     if (root == NULL)
// //     {
// //         return;
// //     }

// //     queue<Node*> q;
// //     q.push(root);
// //     q.push(NULL);
    

// //         vector<int> input;
// //     while (!q.empty())
// //     {
// //         Node *temp = q.front();
// //         q.pop();
// //         if (temp == NULL)
// //         {
// //             ans.push_back(input);
// //             count++;
// //             input.clear();
// //             if (!q.empty())
// //             {
// //                 q.push(NULL);
// //             }
// //         }
// //         else
// //         {
// //             if (count % 2 == 0)
// //             {
// //                 input.push_back(temp->data);

// //                 if (temp->right)
// //                 {
// //                     q.push(temp->right);
// //                 }
// //                 if (temp->left)
// //                 {
// //                     q.push(temp->left);
// //                 }
// //             }
// //             else
// //             {
// //                 input.push_back(temp->data);

// //                 if (temp->left)
// //                 {
// //                     q.push(temp->left);
// //                 }
// //                 if (temp->right)
// //                 {
// //                     q.push(temp->right);
// //                 }
// //             }
// //         }
// //     }
// // }
// //     int main()
// //     {
// //         Node* root = NULL;
// //         root = bulidTree();

// //         // Node* root= new Node(3);
// //         // root->left=new Node(2);
// //         // root->left->left=new Node(1);
// //         // root->left->right=new Node(5);
// //         // root->left->right->left=new Node(6);
// //         // root->left->right->right=new Node(7);
// //         // root->right->right= new Node(7);

// //         int count=0;

// //         vector<vector<int>> ans;
// //         zigzagtraversal(root, ans,count);

// //         for(auto i: ans){
// //             for(auto j: i){
// //                 cout<<j<<" ";
// //             }
// //             cout<<endl;
// //         }

// //     }

//     // int main()
//     // {

//     //     vector<int> arr{-2,0,1,1,5};
//     //     int target = 1;

//     //     int n = arr.size();
//     //     int curr_sum = 0;
//     //     int sum = 0;
//     //     for (int i = 0; i < n; i++)
//     //     {
//     //         int j = i + 1;
//     //         while (j < n)
//     //         {
//     //             int k = j + 1;
//     //             while (k < n)
//     //             {
//     //                 sum = 0;
//     //                 sum += arr[j] + arr[k] + arr[i];
//     //                 if (sum == target)
//     //                 {
//     //                     curr_sum++;
//     //                 }
//     //                 k++;
//     //             }
//     //             j++;
//     //         }
//     //     }
//     //     cout << curr_sum;
//     // }

// cout<<"How much each owes or is owed:"<<endl;
    // for(auto l:owed){
    //     // int d = amount_paid[l] / shared_memb[l];
    //     for(auto j: i){
    //         cout<<l<<"ows Rs."<<"to "<<j<<".";
    //     }
    // }

    #include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    // Total numbers of friends
    int n;
    cout << "Enter the number of friends: ";
    cin >> n;

    vector<vector<double>> owed(n, vector<double>(n, 0));

    // Name of the friends
    vector<string> names(n);
    cout << "Enter the names of friends: ";
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }

    // Stored in the map with the (key, value) pair
    vector<double> amount_paid(n);
    map<string, double> mp;
    cout << "Enter the amount paid by each friend: ";
    for (int i = 0; i < n; i++)
    {
        cin >> amount_paid[i];
        mp[names[i]] = amount_paid[i];
    }

    double total_amount = 0;
    for (int i = 0; i < n; i++)
    {
        total_amount += amount_paid[i];
    }

    vector<int> shared_memb(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number of shared members for " << names[i] << ": ";
        cin >> shared_memb[i];
    }

    for (int i = 0; i < n; i++)
    {
        double equal_share = total_amount / n;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                owed[i][j] = (amount_paid[i] - equal_share) / (n - 1);
            }
        }
    }

    // Printing Friends names
    cout << "Total amount spent by each friend:" << endl;
    for (auto i : mp)
    {
        cout << i.first << ": " << i.second << ", ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << names[i] << " paid Rs." << amount_paid[i] << " (shared by ";
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                cout << names[j] << ", ";
            }
        }
        cout << ")." << endl;
    }

    cout << "How much each owes or is owed:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (owed[i][j] > 0)
                {
                    cout << names[i] << " owes Rs." << owed[i][j] << " to " << names[j] << "." << endl;
                }
                else if (owed[i][j] < 0)
                {
                    cout << names[j] << " owes Rs." << -owed[i][j] << " to " << names[i] << "." << endl;
                }
            }
        }
    }

    return 0;
}