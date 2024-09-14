
#include <iostream>
 using namespace std;
 int main()
  {
//     int i=0;
//     i=i+1;
//     cout<<i;
//     /*print i *///i=i+1
//     cout<<++i;
// }

// // problem 2
// short i=2300, j=4322;
// 	cout<<"i+j="<<(i+j);

// problem 3


	// float l, b;
	//  float P = 2 * (l+b);
	// cout<<"Perimeter="<<P;


// // PROBLEM 4
// 		int n;
//     cin>>n;
//     for (int row=0; row<n; ++row) {
//         for (int col=0; col<n; ++col) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// PROBLEM 5
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2;i<n;i++){
//       if(n%i == 0){
//           isPrime = false; break;
//       }
//   }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;


//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=0;j<=n+1;j++){
//             if(j==i+1 || j == n - i - 1 || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// problem 6



    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         if( j == n - i - 1 || i == 0){
    //             cout<<j+1;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


  int n;
  cin>>n;
  for (int i = 1; i <n; i++) {
    for (int j = 1; j < n - i - 1; j++) {
      cout<<" ";
    }
    for (int j = i; j < i+1; j++) {
        cout<<j+1;
    }
    int ele = 2 * (n - i - 1);
    for (int j = 1; j <= i - 1; j++) {
      cout<<ele;;
    }
    cout<<" ";
    cout<<endl;
  }
  cout<<endl;
  return 0;
}


















  