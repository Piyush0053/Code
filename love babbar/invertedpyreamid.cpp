 #include <iostream>
 using namespace std;
 int main(){
    // inverted hollow pyramid
    int n;
    cin>>n;
// for(int row=0;row<n;row++)
// { 
//     for(int col=0;col<row+1;col++)
//     {
//         cout<<" ";
//     }
//     for(int col=0;col<n-row;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// hollow diamond

for(int row=0;row<n;row++){
    for(int col=0;col<n-row-1;col++)
    {
        cout<<" ";
    }
    // print star
    for(int col=0;col<2*row+1;col++){
        if (col==0){
            cout<<"*";
        }
        else if (col==2*row)
        {
            cout<<"*";
        }
        else {
            cout<<" ";
        }
    }
    cout<<endl;
}


for(int row=0; row<n; row++){
for(int col=0;col<row;col++){
    cout<<" ";
}
// star
for(int col=0;col<2*n-2*row-1;col++){
    if(col==0||col==2*n-2*row-2){
        cout<<"*";
    }
    else{
        cout<<" ";
    }
}
cout<<endl;
}

 }