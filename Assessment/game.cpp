// RENT MANGEMENT SYSTEM

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << " Enter the number of peoples" << endl;
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    vector<string> names;
    for (int i = 0; i < n; i++)
    {
        string m;
        cout << " Enter the" << i + 1 << "name:" << endl;
        cin >> m;
        names.push_back(m);
        mp[names[i]]++;
    }

    // Record Expense
    int Total_amount_paid = 0;
    int sharedmembers = 0;

    vector<vector<string>> owed;
    vector<int> amount_paid;
    vector<int> shared_memb;
    for (int i = 0; i < n; i++)
    {
        Total_amount_paid = 0;
        cout << "Enter the amount paid by the:" << names[i] << endl;
        cin >> Total_amount_paid;
        mp[names[i]] = Total_amount_paid;
        amount_paid.push_back(Total_amount_paid);
        cout << "enter the number of the shared members:" << endl;
        cin >> sharedmembers;
        shared_memb.push_back(sharedmembers);
        vector<string> owes;
        for (int i = 0; i < sharedmembers; i++)
        {
            string n;
            cout << "Enter the person who shared:" << endl;
            cin >> n;
            owes.push_back(n);
        }
        owed.push_back(owes);
    }

    cout << endl;
    cout << endl;
    cout << endl;

    // Printing Friends names
    cout << "Total amount spent by each friend:" << endl;
    for (auto i : mp)
    {
        cout << i.first << ": " << i.second<<", ";
    }
    // shared by;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << " paid Rs." << amount_paid[i] << "(shared by";
        int k = 0;
        for (int j = 0; j < owed.size(); j++)
        {
            cout << owed[k][j] << ", ";
        }
        cout << ").";
        cout << endl;
        k++;
    }


    // cout<<"How much each owes or is owed:"<<endl;
    // for(auto l:names){
    //     int d = amount_paid[l] / shared_memb[l];
    //     for(auto j: i){
    //         cout<<l<<"ows Rs."<<"to "<<j<<".";

    //     }
    // }

    return 0;
}
