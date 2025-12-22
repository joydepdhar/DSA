#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    while (x--)
    {
        int a,b,sum=0;
        cin>>a>>b;
        for(int i=1;i<=n;i++){
        if(i>=a && i<=b){
            sum+=arr[i];
        }
    }
        cout<<sum<<endl;
    }
    
    return 0;
}