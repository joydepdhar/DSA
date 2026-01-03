#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    long long sum=0,sum2=0;
    int arr[x];
    int arr1[y];
    for(int i=0;i<x;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    for(int i=0;i<y;i++){
        cin>>arr1[i];
        sum2=sum2+arr1[i];
    }
    if(sum2>=sum){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}