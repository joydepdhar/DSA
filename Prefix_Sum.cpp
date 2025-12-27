#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long>v(n);
    vector<long long>PreSum(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        PreSum[i]=sum;
    }
    for(int i=n-1;i>=0;i--){
        cout<<PreSum[i]<<" ";
    }
    return 0;
}