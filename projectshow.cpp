// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // int main() {
// // //     long long x,y;
// // //     cin>>x>>y;
// // //     long long rem=y%x;
// // //     long long choco=y/x;
// // //     cout<<choco<<" "<<rem; 
// // //     return 0;
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin>>n;
// //     vector<long long> even, odd;
// //     for(int i=0;i<n;i++){
// //         long long x;
// //         cin>>x;
// //         if(x%2==0){
// //             even.push_back(x);
// //         }else{
// //             odd.push_back(x);
// //         }
// //     }
// //     for(long long x:even){
// //         cout<<x<<" ";
// //     }
// //     for(long long x:odd){
// //         cout<<x<<" ";
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int x,y;
//     cin>>x>>y;
//     vector<long long>gems(x);
//     for(int i=0;i<x;i++){
//         cin>>gems[i];
//     }
//     sort(gems.begin(),gems.end());
//     cout<<gems[y-1];
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        cout<<i;
    }
    cout<<endl;
    for(int i=2;i<=x-1;i++){
        cout<<i;
        for(int j=1;j<=2*(x-2);j++){
            cout<<" ";
        }
        cout<<(x-i+1)<<endl;
    }
    for(int i=x;i>=1;i--){
        cout<<i;
    }
    return 0;
}